//
//  TKAHumanStruct.h
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAHumanStruct__
#define __TKASecondWeek__TKAHumanStruct__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "TKAStringStruct.h"
//#include "TKAArrayStruct.h"

typedef struct TKAHumanStruct TKAHumanStruct;
typedef struct TKAArrayStruct TKAArrayStruct;

typedef enum {
    TKAMale,
    TKAFemale
} TKAGender;

struct TKAHumanStruct {
    TKAStringStruct *_name;
    uint8_t _age;
    TKAGender _gender;
    uint8_t _countChildren;
    uint64_t _referenceCount;
    TKAHumanStruct *_partner;
    TKAHumanStruct *_father;
    TKAHumanStruct *_mother;
//   TKAHumanStruct *_child[20];
    TKAArrayStruct *_children;
 };
typedef struct TKAHumanStruct TKAHumanStruct;

extern
TKAHumanStruct *TKAHumanStructCreate();

extern
void TKAHumanStructRetain(TKAHumanStruct *human);

extern
void TKAHumanStructRelease(TKAHumanStruct *human);

extern
void TKAHumanStructSetName(TKAHumanStruct *human, TKAStringStruct *name);

extern
void TKAHumanStructSetAge(TKAHumanStruct *human, uint8_t age);

extern
void TKAHumanStructSetGender(TKAHumanStruct *human, TKAGender gender);

extern
TKAStringStruct *TKAHumanStructGetName(TKAHumanStruct *human);

extern
uint8_t TKAHumanStructGetAge(TKAHumanStruct *human);

extern
TKAGender TKAHumanStructGetGender(TKAHumanStruct *human);

extern
uint8_t TKAHumanStructGetCountChildren(TKAHumanStruct *human);

extern
void TKAHumanStructSetCountChildren(TKAHumanStruct *human, uint8_t count);

extern
TKAHumanStruct *TKAHumanStructGetPartner(TKAHumanStruct *human);

extern
TKAHumanStruct *TKAHumanStructGetFather(TKAHumanStruct *human);

extern
void TKAHumanStructSetFather(TKAHumanStruct *human1, TKAHumanStruct *human2);

extern
TKAHumanStruct *TKAHumanStructGetMother(TKAHumanStruct *human);

extern
void TKAHumanStructSetMother(TKAHumanStruct *human1, TKAHumanStruct *human2);

extern
TKAArrayStruct *TKAHumanStructGetChildren(TKAHumanStruct *human);

extern
void TKAHumanStructBorn1(TKAHumanStruct *newBorn, TKAHumanStruct *father, TKAHumanStruct *mother, TKAGender gender);

extern
TKAHumanStruct *TKAHumanStructBorn(TKAHumanStruct *father, TKAHumanStruct *mother, TKAGender gender);

extern
void TKAHumanStructSetChild(TKAHumanStruct *parent, TKAHumanStruct *child);

extern
void TKAHumanStructMarry(TKAHumanStruct *humanMale, TKAHumanStruct *humanFemale);

extern
void TKAHumanStructDivorcePartner(TKAHumanStruct *human);

extern
void TKAHumanStructDivorce(TKAHumanStruct *partner1, TKAHumanStruct *partner2);

extern
void TKAHumanStructDie(TKAHumanStruct *human);


#endif /* defined(__TKASecondWeek__TKAHumanStruct__) */
