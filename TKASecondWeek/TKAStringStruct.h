//
//  TKAStringStruct.h
//  TKASecondWeek
//
//  Created by Taisiya on 21.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAStringStruct__
#define __TKASecondWeek__TKAStringStruct__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TKAStringStruct {
    uint64_t _referenceCount;
    char *_data;
    uint64_t _lenght;
};
typedef struct TKAStringStruct TKAStringStruct;

extern
TKAStringStruct *TKAStringStructCreate();

extern
void TKAStringStructRetain(TKAStringStruct *string);

extern
void TKAStringStructRelease(TKAStringStruct *string);

extern
void TKAStringStructSetLenght(TKAStringStruct *string, uint64_t lenght);

extern
uint64_t TKAStringStructGetLenght(TKAStringStruct *string);

extern
char *TKAStringStructGetData(TKAStringStruct *string);

extern
void TKAStringStructCopyData(TKAStringStruct *string, char *data, uint64_t lenght);

#endif /* defined(__TKASecondWeek__TKAStringStruct__) */
