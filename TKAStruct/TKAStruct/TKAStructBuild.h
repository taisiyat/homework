//
//  TKAStructBuild.h
//  TKAStruct
//
//  Created by Taisiya on 12.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAStruct__TKAStructBuild__
#define __TKAStruct__TKAStructBuild__
#include <stdio.h>
#include <stdbool.h>

struct TKAStructure {
    bool boolValue[6];
    float floatValue;
    int integerValue;
    long long longLongValue;
    int intValue;
    short shortValue;
    double doubleValue;
    char *stringValue;
    char anotherCharValue;
};
typedef struct TKAStructure TKAStructure;

//struct IDPBitFieldStructure {
//    union {
//      struct {
//            bool b0 : 1;
//            bool b1 : 1;
//            bool b2 : 1;
//            bool b3 : 1;
//            bool b4 : 1;
//            bool b5 : 1;
//            bool b6 : 1;
//        } bits;
//        uint8_t flags;
//    } data;
//};
//typedef struct IDPBitFieldStructure IDPBitFieldStructure;



#endif /* defined(__TKAStruct__TKAStructBuild__) */
