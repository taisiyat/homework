//
//  TKAStructPerson.h
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAObjectHuman__
#define __TKASecondWeek__TKAObjectHuman__

#include <stdio.h>
#include <string.h>
#include "TKAObjectHumanTest.h"

typedef struct TKAHuman TKAHuman;

struct TKAString {
    char *_data;
    unsigned int _lenght;
};
typedef struct TKAString TKAString;

//struct TKAArrayHuman {
//    TKAHuman _arraydata[];
//    unsigned int _lenght;
//};
//typedef struct TKAArray TKAArray;


struct TKAHuman {
    TKAString *_name;
    uint8_t _age;
    enum {
        TKAMale,
        TKAFemale
    } _gender;
//    TKAArrayHuman *_child
    TKAHuman *_child[5];
    uint8_t _countChild;
    enum {
        TKASingle,
        TKAPartner
    } _married;
    TKAHuman *_partner;
    TKAHuman *_father;
    TKAHuman *_mother;
    uint64_t _referenceCount;
};
typedef struct TKAHuman TKAHuman;

//void TKAPersonRetain(TKAPerson *person);
//void TKAPersonRelease(TKAPerson *person);
//char *TKAPersonGetName(TKAPerson *person);
//char TKAPersonGetAge(TKAPerson *person);

#endif /* defined(__TKASecondWeek__TKAObjectPerson__) */
