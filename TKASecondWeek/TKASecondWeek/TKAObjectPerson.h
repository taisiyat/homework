//
//  TKAStructPerson.h
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAObjectPerson__
#define __TKASecondWeek__TKAObjectPerson__

#include <stdio.h>
#include <string.h>
#include "TKAObjectPersonTest.h"

typedef struct TKAPerson TKAPerson;

struct TKAPerson {
    char *_name;
    char _age;
    enum {
        TKAMale,
        TKAFemale
    } _sex;
    TKAPerson *_child[20];
    enum {
        TKASingle,
        TKAMarried
    } _marriage;
    TKAPerson *_partner;
    TKAPerson *_father;
    TKAPerson *_mother;
    uint64_t _referenceCount;
};
typedef struct TKAPerson TKAPerson;

void TKAPersonRetain(TKAPerson *person);
void TKAPersonRelease(TKAPerson *person);
char *TKAPersonGetName(TKAPerson *person);
char TKAPersonGetAge(TKAPerson *person);

#endif /* defined(__TKASecondWeek__TKAObjectPerson__) */
