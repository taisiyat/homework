//
//  TKAArrayStruct.h
//  TKASecondWeek
//
//  Created by Taisiya on 21.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAArrayStruct__
#define __TKASecondWeek__TKAArrayStruct__

#include <stdio.h>
#include <stdlib.h>
#include "TKAHumanStruct.h"

struct TKAArrayStruct {
    uint64_t _referenceCount;
    TKAHumanStruct *_child;
    uint64_t _lenght;
};
typedef struct TKAArrayStruct TKAArrayStruct;

extern
TKAArrayStruct *TKAArrayStructCreate();

extern
void TKAArrayStructRetain(TKAArrayStruct *string);

extern
void TKAArrayStructRelease(TKAArrayStruct *string);

extern
void TKAArrayStructSetLength(TKAArrayStruct *string, uint64_t length);

extern
uint64_t TKAArrayStructGetLength(TKAArrayStruct *string);

extern
void TKAArrayStructSetData(TKAArrayStruct *string, void *data);

extern
void *TKAArrayStructGetData(TKAArrayStruct *string);

#endif /* defined(__TKASecondWeek__TKAArrayStruct__) */
