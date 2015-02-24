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
//#include "TKAHumanStruct.h"

typedef struct TKAHumanStruct TKAHumanStruct;

struct TKAArrayStruct {
    uint64_t _referenceCount;
    TKAHumanStruct **_data;
    uint64_t _lenght;
};

typedef struct TKAArrayStruct TKAArrayStruct;

extern
TKAArrayStruct *TKAArrayStructCreate();

extern
void TKAArrayStructRetain(TKAArrayStruct *array);

extern
void TKAArrayStructRelease(TKAArrayStruct *array);

extern
void TKAArrayStructSetLenght(TKAArrayStruct *array, uint64_t lenght);

extern
uint64_t TKAArrayStructGetLenght(TKAArrayStruct *array);

extern
void TKAArrayStructSetData(TKAArrayStruct *array, TKAHumanStruct *data);

extern
void *TKAArrayStructGetData(TKAArrayStruct *array);

extern
TKAHumanStruct *TKAArrayStructGetDataIndex(TKAArrayStruct *array, uint64_t index);
   
extern
void TKAArrayStructSetDataIndex(TKAArrayStruct *array, void *data, uint64_t index);

#endif /* defined(__TKASecondWeek__TKAArrayStruct__) */
