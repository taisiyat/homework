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
#include "TKAObgect.h"

struct TKAString {
    TKAObject _object;
    char _data;
    uint64_t _lenght;
};
typedef struct TKAString TKAString;

#endif /* defined(__TKASecondWeek__TKAObjectString__) */
