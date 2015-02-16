//
//  TKAStructBuild.h
//  TKAFirstWeek
//
//  Created by Taisiya on 15.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAFirstWeek__TKAStructBuild__
#define __TKAFirstWeek__TKAStructBuild__

#include <stdio.h>
#include <stdbool.h>
struct TKAStructureNull {
}; typedef struct TKAStructureNull TKAStructureNull;

struct TKAStructureFirst {
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
}; typedef struct TKAStructureFirst TKAStructureFirst;

struct TKAStructureSecond {
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
}; typedef struct TKAStructureSecond TKAStructureSecond;

union TKAStructureUnion {
    long long longLongValue;
    double doubleValue;
    char *stringValue;
    float floatValue;
    int integerValue;
    short shortValueOne;
    short shortValueTwo;
    short shortValueThree;
    struct {
            unsigned boolValueOne : 1;
            unsigned boolValueTwo : 1;
            unsigned boolValueThree : 1;
            unsigned boolValueFour : 1;
            unsigned boolValueFive : 1;
            unsigned boolValueSix : 1;
          } bits;
    }; typedef union TKAStructureUnion TKAStructureUnion;

void TKAStructureMain();

#endif /* defined(__TKAFirstWeek__TKAStructBuild__) */
