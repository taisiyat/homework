//
//  TKAStructPerson.c
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//


#include "TKAObjectHuman.h"

//static
//void TKAPersonStackDealloc(TKAPerson *person);
//
//TKAPerson *TKAPersonCreate() {
//    TKAPerson *person = malloc(sizeof(*person));
//    person->_name = NULL;
//    person->_referenceCount = 1;
//    person->_age = 0;
//    person->_sex = 0;
//    person->_child[20] = NULL;
//    person->_marriage = 0;
//    person->_partner = NULL;
//    person->_father = NULL;
//    person->_mother = NULL;
//    return person;
//}
//
//void TKAPersonRetain(TKAPerson *person) {
//    person->_referenceCount++;
//}
//
//void TKAPersonRelease(TKAPerson *person) {
//    person->_referenceCount--;
//    if (0 == person->_referenceCount) {
//        TKAPersonStackDealloc(person);
//    }
//}
//
//char *TKAPersonGetName(TKAPerson *person) {
//    return person->_name;
//}
//
//char TKAPersonGetAge(TKAPerson *person) {
//    return person->_age;
//}
//
//void TKAPersonStackDealloc(TKAPerson *person) {
//    if (NULL != person->_name) {
//        free(person->_name);
//    }
//    free(person);
//}
