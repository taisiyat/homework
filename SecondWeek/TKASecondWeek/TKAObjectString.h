//
//  TKAObjectString.h
//  TKASecondWeek
//
//  Created by Taisiya on 19.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAObjectString__
#define __TKASecondWeek__TKAObjectString__

#include <stdio.h>
#include <string.h>
#include "TKAObject.h"

struct TKAString {
    uint64_t _referenceCount;
    char *_data;
    uint64_t _lenght;
};
typedef struct TKAString TKAString;

extern
TKAString *TKAStringCreate();

extern
void TKAStringRetain(TKAString *string);

extern
void TKAStringRelease(TKAString *string);

extern
void TKAStringSetLength(TKAString *string, uint64_t length);

extern
uint64_t TKAStringGetLength(TKAString *string);

extern
void TKAStringSetData(TKAString *string, char *datastring);

extern
char *TKAStringGetData(TKAString *string);

#endif /* defined(__TKASecondWeek__TKAObjectString__) */
