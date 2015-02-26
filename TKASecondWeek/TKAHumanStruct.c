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
void TKAHumanStructFreeString(TKAStringStruct *name);
static
void TKAHumanStructFreeArray(TKAArrayStruct *children);
static
void TKAHumanStructFreeHuman(TKAHumanStruct *human);

#pragma mark -
#pragma mark Public Declarations

#pragma mark -
#pragma mark Privat Implementations

//make macro
void TKAHumanStructFreeString(TKAStringStruct *name) {
    if (NULL != name) {
        TKAStringStructRelease(name);
    }
}

void TKAHumanStructFreeArray(TKAArrayStruct *children) {
    if (NULL != children) {
        TKAArrayStructRelease(children);
    }
}

void TKAHumanStructFreeHuman(TKAHumanStruct *human) {
    if (NULL != human) {
        TKAHumanStructRelease(human);
    }
}


void TKAHumanStructDealloc(TKAHumanStruct *human) {
    TKAHumanStructFreeString(TKAHumanStructGetName(human));
    TKAHumanStructFreeArray(TKAHumanStructGetChildren(human));
    TKAHumanStructFreeHuman(TKAHumanStructGetPartner(human));
    TKAHumanStructFreeHuman(TKAHumanStructGetMother(human));
    TKAHumanStructFreeHuman(TKAHumanStructGetFather(human));
    free(human);
}

#pragma mark -
#pragma mark Public Implementations
//
//TKAHumanStruct *TKAHumanStructCreate() {
//    TKAHumanStruct *human = malloc(sizeof(*human));
//    human->_name = NULL;
//    human->_partner = NULL;
//    human->_mother = NULL;
//    human->_father = NULL;
//    human->_children = NULL;
//    human->_referenceCount=1;
//    return human;
//}

TKAHumanStruct *TKAHumanStructCreate() {
    TKAHumanStruct *human = calloc(1, sizeof(*human));
    human->_referenceCount=1;
    return human;
}

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
    if (TKAHumanStructGetName(human) != name) {
        if (NULL != TKAHumanStructGetName(human)) {
            TKAStringStructRelease(TKAHumanStructGetName(human));
        }
        human->_name = name;
        if (NULL != TKAHumanStructGetName(human)) {
            TKAStringStructRetain(name);
        }
    }
}

TKAStringStruct *TKAHumanStructGetName(TKAHumanStruct *human) {
    return human->_name;
}

void TKAHumanStructSetAge(TKAHumanStruct *human, uint8_t age) {
    human->_age = age;
}

uint8_t TKAHumanStructGetAge(TKAHumanStruct *human) {
    return human->_age;
}

void TKAHumanStructSetGender(TKAHumanStruct *human, TKAGender gender) {
    human->_gender = gender;
}

TKAGender TKAHumanStructGetGender(TKAHumanStruct *human) {
    return human->_gender;
}

void TKAHumanStructSetCountChildren(TKAHumanStruct *human, uint8_t count) {
    human->_countChildren = count;
}

uint8_t TKAHumanStructGetCountChildren(TKAHumanStruct *human) {
    return human->_countChildren;
}

TKAArrayStruct *TKAHumanStructGetChildren(TKAHumanStruct *human) {
    return human->_children;
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

//make macro

void TKAHumanStructSetPartner(TKAHumanStruct *human1, TKAHumanStruct *human2) {
    if (TKAHumanStructGetPartner(human1) != human2) {
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRelease(TKAHumanStructGetPartner(human1));
        }
        human1->_partner = human2;
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRetain(human2);
        }
    }
}

void TKAHumanStructSetFather(TKAHumanStruct *human1, TKAHumanStruct *human2) {
    if (TKAHumanStructGetPartner(human1) != human2) {
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRelease(TKAHumanStructGetPartner(human1));
        }
        human1->_father = human2;
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRetain(human2);
        }
    }
}

void TKAHumanStructSetMother(TKAHumanStruct *human1, TKAHumanStruct *human2) {
    if (TKAHumanStructGetPartner(human1) != human2) {
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRelease(TKAHumanStructGetPartner(human1));
        }
        human1->_mother = human2;
        if (NULL != TKAHumanStructGetPartner(human1)) {
            TKAHumanStructRetain(human2);
        }
    }
}

void TKAHumanStructDivorcePartner(TKAHumanStruct *human) {
    if (NULL != TKAHumanStructGetPartner(human)) {
        if (TKAHumanStructGetPartner(TKAHumanStructGetPartner(human)) == human) {
            TKAHumanStructDivorce(human, TKAHumanStructGetPartner(human));
        } else {
            TKAHumanStructSetPartner(human, NULL);
        }
    }
}

void TKAHumanStructDivorce(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    if (partner1 != partner2 && NULL != partner1 && NULL != partner2) {
        if (partner1 == TKAHumanStructGetPartner(partner2) && partner2 == TKAHumanStructGetPartner(partner1)) {
            TKAHumanStructSetPartner(partner1, NULL);
            TKAHumanStructSetPartner(partner2, NULL);
        }
    }
}

void TKAHumanStructMarry(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    if (partner1 != partner2 && NULL != partner1 && NULL != partner2) {
        if (NULL != TKAHumanStructGetPartner(partner1)) {
            TKAHumanStructDivorcePartner(partner1);
        }
        if (NULL != TKAHumanStructGetPartner(partner2)) {
            TKAHumanStructDivorcePartner(partner2);
        }
        TKAHumanStructSetPartner(partner1, partner2);
        TKAHumanStructSetPartner(partner2, partner1);
    }
}

void TKAHumanStructSetChild(TKAHumanStruct *parent, TKAHumanStruct *child) {
    if (child != parent) {
        if (NULL != child) {
            if (NULL == TKAHumanStructGetChildren(parent)) {
                parent->_children = TKAArrayStructCreate();
            }
            if (NULL != TKAHumanStructGetChildren(parent)) {
                //             TKAArrayStructAddChild(TKAHumanStructGetChildren(parent), child);
            }
            parent->_countChildren ++;
            TKAHumanStructRetain(child);
        }
     }
}

TKAHumanStruct *TKAHumanStructBorn(TKAHumanStruct *father, TKAHumanStruct *mother, TKAGender gender) {
    TKAHumanStruct *newBorn = TKAHumanStructCreate();
    TKAHumanStructSetAge(newBorn, 0);
    TKAHumanStructSetGender(newBorn, gender);
    TKAHumanStructSetCountChildren(newBorn, 0);
    TKAHumanStructSetChild(father, newBorn);
    TKAHumanStructSetFather(newBorn, father);
    if (father !=mother) {
        TKAHumanStructSetChild(mother, newBorn);
        TKAHumanStructSetMother(newBorn, mother);
    }
    return newBorn;
}

void TKAHumanStructDie(TKAHumanStruct *human) {
    TKAHumanStructRelease(human);
}


