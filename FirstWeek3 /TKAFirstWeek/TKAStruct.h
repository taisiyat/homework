//
//  TKAStructBuild.h
//  TKAFirstWeek
//
//  Created by Taisiya on 15.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAFirstWeek__TKAStruct__
#define __TKAFirstWeek__TKAStruct__

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>

struct TKAStructNull {
    
};
typedef struct TKAStructNull TKAStructNull;

struct TKAStructFirst {
    bool boolValueOne;
    bool boolValueTwo;
    bool boolValueThree;
    bool boolValueFour;
    bool boolValueFive;
    bool boolValueSix;
    float floatValue;
    int integerValue;
    long long longLongValue;
    short shortValueOne;
    short shortValueTwo;
    short shortValueThree;
    double doubleValue;
    char *stringValue;
};
typedef struct TKAStructFirst TKAStructFirst;

struct TKAStructSecond {
    long long longLongValue;
    double doubleValue;
    char *stringValue;
    float floatValue;
    int integerValue;
    short shortValueOne;
    short shortValueTwo;
    short shortValueThree;
    bool boolValueOne;
    bool boolValueTwo;
    bool boolValueThree;
    bool boolValueFour;
    bool boolValueFive;
    bool boolValueSix;
};
typedef struct TKAStructSecond TKAStructSecond;

struct TKAStructWithUnion {
    long long longLongValue;
    double doubleValue;
    char *stringValue;
    float floatValue;
    int integerValue;
    short shortValueOne;
    short shortValueTwo;
    short shortValueThree;
    union {
        struct {
            bool boolValueOne : 1;
            bool boolValueTwo : 1;
            bool boolValueThree : 1;
            bool boolValueFour : 1;
            bool boolValueFive : 1;
            bool boolValueSix : 1;
        } bits;
        uint8_t fild;
    } bitsFild;
};
typedef struct TKAStructWithUnion TKAStructWithUnion;

extern
void TKAStructMain();

#endif /* defined(__TKAFirstWeek__TKAStruct__) */
