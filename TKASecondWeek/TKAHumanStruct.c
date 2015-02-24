//
//  TKAHumanStruct.c
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//


#include "TKAHumanStruct.h"
#include "TKAArrayStruct.h"

#pragma mark -
#pragma mark Private Declarations

static
void TKAHumanStructDealloc(TKAHumanStruct *human);

// make macro
static
void THAHumanStructFreeStringFild(void *fild);
static
void THAHumanStructFreeArrayFild(void *fild);
static
void THAHumanStructFreeHumanFild(void *fild);


#pragma mark -
#pragma mark Public Declarations

#pragma mark -
#pragma mark Privat Implementations

//make macro
void THAHumanStructFreeStringFild(void *fild) {
    if (NULL != fild) {
        TKAStringStructRelease(fild);
        free(fild);
    }
}

void THAHumanStructFreeArrayFild(void *fild) {
    if (NULL != fild) {
        TKAArrayStructRelease(fild);
        free(fild);
    }
}

void TKAHumanStructFreeHumanFild(void *fild) {
    if (NULL != fild) {
        TKAHumanStructRelease(fild);
        free(fild);
    }
}


void TKAHumanStructDealloc(TKAHumanStruct *human) {
    THAHumanStructFreeStringFild(human->_name);
    THAHumanStructFreeArrayFild(human->_children);
    TKAHumanStructFreeHumanFild(human->_partner);
    TKAHumanStructFreeHumanFild(human->_father);
    TKAHumanStructFreeHumanFild(human->_mother);
    free(human);
}

#pragma mark -
#pragma mark Public Implementations

TKAHumanStruct *TKAHumanStructCreate() {
    TKAHumanStruct *human = malloc(sizeof(*human));
    human->_name = NULL;
    human->_partner = NULL;
    human->_mother = NULL;
    human->_father = NULL;
    human->_children = NULL;
    human->_referenceCount=1;
    return human;
}

//TKAHumanStruct *TKAHumanStructCreate() {
//    TKAHumanStruct *human = calloc(1, sizeof(*human));
//    human->_referenceCount=1;
//    return human;
//}

void TKAHumanStructRetain(TKAHumanStruct *human) {
    human->_referenceCount++;
}

void TKAHumanStructRelease(TKAHumanStruct *human) {
    human->_referenceCount--;
    if (0 == human->_referenceCount){
        TKAHumanStructDealloc(human);
    }
}

void TKAHumanStructSetName(TKAHumanStruct *human, TKAStringStruct *name) {
    if (NULL != human->_name) {
        TKAStringStructRelease(human->_name);
    }
    human->_name = name;
    TKAStringStructRetain(name);
}

void TKAHumanStructSetAge(TKAHumanStruct *human, uint8_t age) {
    human->_age = age;
}

void TKAHumanStructSetGender(TKAHumanStruct *human, TKAGender gender) {
    human->_gender = gender;
}

void TKAHumanStructSetHumanFild(TKAHumanStruct *human1, TKAHumanStruct *fild, TKAHumanStruct *human2) {
    if (human1 != human2) {
        if (NULL != fild) {
            TKAHumanStructRelease(fild);
            fild = NULL;
        }
        if (NULL != human2) {
            fild = human2;
            TKAHumanStructRetain(human2);
        } else {
            fild = NULL;
        }
    }
}


TKAStringStruct *TKAHumanStructGetName(TKAHumanStruct *human) {
    return human->_name;
}

uint8_t TKAHumanStructGetAge(TKAHumanStruct *human) {
    return human->_age;
}

TKAGender TKAHumanStructGetGender(TKAHumanStruct *human) {
    return human->_gender;
}

TKAHumanStruct *TKAHumanStructGetPartner(TKAHumanStruct *human) {
    return human->_partner;
}

TKAHumanStruct *TKAHumanStructGetFather(TKAHumanStruct *human) {
    return human->_father;
}

TKAHumanStruct *TKAHumanStructGetMother(TKAHumanStruct *human) {
    return human->_mother;
}

void TKAHumanStructSetPartner(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    partner1->_married = true;
    TKAHumanStructSetHumanFild(partner1, partner1->_partner, partner2);
}

void TKAHumanStructSetFather(TKAHumanStruct *child, TKAHumanStruct *father) {
    if (child != father) {
        TKAHumanStructSetHumanFild(child, child->_father, father);
    }
}

void TKAHumanStructSetMother(TKAHumanStruct *child, TKAHumanStruct *mother) {
    if (child != mother) {
        TKAHumanStructSetHumanFild(child, child->_mother, mother);
    }
}

void TKAHumanStructSetChild(TKAHumanStruct *parent, TKAHumanStruct *child) {
    if (child != parent) {
        parent->_countChild++;
        if (NULL == parent->_children) {
            parent->_children = TKAArrayStructCreate();
        }
//        boll flagchild = false;
//        for (uint64_t incr = 0; incr < parent->_children->_lenght; incr ++) {
//            if (NULL == parent->_children->_data){
//                parent->_children->_data = &child;
//                TKAHumanStructRetain(child);
//                flagchild = true;
//            }
//            
//        }
//        if (false == flagchild) {
        TKAArrayStructSetData( parent->_children, child);
        TKAHumanStructRetain(child);
        TKAHumanStructRetain(child);
}
}

TKAHumanStruct *TKAHumanStructBorn(TKAHumanStruct *father, TKAHumanStruct *mother, TKAGender gender) {
    if (mother != father) {
        TKAHumanStruct *childborn = TKAHumanStructCreate();
        childborn->_age = 0;
        childborn->_gender = gender;
        childborn->_countChild = 0;
        childborn->_married = false;
        TKAHumanStructSetHumanFild(childborn, childborn->_mother, mother);
        TKAHumanStructSetHumanFild(childborn, childborn->_father, father);
        
        return childborn;
        }
    return NULL;
}

void TKAHumanStructDivorcePartner(TKAHumanStruct *human) {
    if (human->_married == true) {
        TKAHumanStructSetHumanFild(human, human->_partner, NULL);
        human->_married = false;
    }
}

void TKAHumanStructDivorce(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    if (partner1 != partner2) {
        if (partner1->_partner == partner2 && partner2->_partner == partner1) {
            TKAHumanStructDivorcePartner(partner1);
            TKAHumanStructDivorcePartner(partner2);
        }
    }
}

void TKAHumanStructMarry(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    if (partner1 != partner2) {
        if (partner1->_married == true) {
            TKAHumanStructDivorcePartner(partner1);
        }
        if (partner2->_married == true) {
            TKAHumanStructDivorcePartner(partner2);
        }
        if (partner1->_married == false && partner2->_married == false) {
            TKAHumanStructSetPartner(partner1, partner2);
            TKAHumanStructSetPartner(partner2, partner1);
        }
    }
}

void TKAHumanStructDie(TKAHumanStruct *human) {
    TKAHumanStructRelease(human);
}


