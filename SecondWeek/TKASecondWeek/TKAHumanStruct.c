//
//  TKAHumanStruct.c
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//


#include "TKAHumanStruct.h"

#pragma mark -
#pragma mark Private Declarations

static
void TKAHumanStructDealloc(TKAHumanStruct *human);

#pragma mark -
#pragma mark Public Declarations

#pragma mark -
#pragma mark Privat Implementations

void TKAHumanStructDealloc(TKAHumanStruct *human) {
    if (NULL != human->_name) {
       TKAStringStructRelease(human->_name);
        free(human->_name);
    }
    if (NULL != human->_partner) {
        TKAHumanStructRelease(human->_partner);
        free(human->_partner);
    }
    if (NULL != human->_father) {
        TKAHumanStructRelease(human->_father);
        free(human->_father);
    }
    if (NULL != human->_mother) {
        TKAHumanStructRelease(human->_mother);
        free(human->_mother);
    }
    if (NULL != human->_child) {
        for (int incr = 0; incr < 20; incr++) {
            human->_child[incr] = NULL;
        }
        free(human->_child);
    }
    free(human);
}

#pragma mark -
#pragma mark Public Implementations

TKAHumanStruct *TKAHumanStructCreate() {
    TKAHumanStruct *human = malloc(sizeof(*human));
    human->_name = NULL;
    human->_partner = NULL;
    human->_mother =NULL;
    human->_father = NULL;
    for (int incr = 0; incr < 20; incr++) {
        human->_child[incr] = NULL;
    }
    human->_referenceCount=1;
    return human;
}

//TKAHumanStruct *TKAHumanStructCreate() {
//    TKAHumanStruct *human = calloc(1,sizeof(*human));
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

void TKAHumanStructSetName(TKAHumanStruct *human, char *name) {
    if (NULL == human->_name) {
        TKAStringStructSetData(human->_name, name);
    }
}

void TKAHumanStructSetAge(TKAHumanStruct *human, uint8_t age) {
    human->_age = age;
}

void TKAHumanStructSetGender(TKAHumanStruct *human, TKAGender gender) {
    human->_gender = gender;
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
    partner1->_partner = partner2;
    TKAHumanStructRetain(partner1);
}

TKAHumanStruct *TKAHumanStructBorn(TKAHumanStruct *father, TKAHumanStruct *mother, TKAGender gender) {
    if (mother != father) {
        TKAHumanStruct *childborn = TKAHumanStructCreate();
        childborn->_age = 0;
        childborn->_gender = gender;
        childborn->_countChild = 0;
        childborn->_married = false;
        for (int incr = 0; incr < 20; incr++) {
            childborn->_child[incr] = NULL;
        }
        childborn->_father = father;
        childborn->_mother = mother;
        TKAHumanStructRetain(childborn);
        TKAHumanStructRetain(childborn);
        mother->_countChild++;
        father->_countChild++;
        mother->_child[mother->_countChild-1] = childborn;
        father->_child[father->_countChild-1] = childborn;
    }
    return childborn;
}

void TKAHumanStructDivorcePartner(TKAHumanStruct *human) {
    if (human->_married == true) {
        if (NULL != human->_partner) {
            TKAHumanStructRelease(human);
        }
        human->_partner = NULL;
        human->_married = false;
    }
}

void TKAHumanStructDivorce(TKAHumanStruct *partner1, TKAHumanStruct *partner2) {
    if (partner1 != partner2) {
        if (partner1->_partner == partner2 && partner2->_partner == partner1) {
            if (partner1->_married == true) {
                TKAHumanStructDivorcePartner(partner1);
            }
            if (partner2->_married == true) {
                TKAHumanStructDivorcePartner(partner2);
            }
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


