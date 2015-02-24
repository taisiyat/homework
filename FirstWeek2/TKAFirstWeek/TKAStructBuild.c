//
//  TKAStructBuild.c
//  TKAFirstWeek
//
//  Created by Taisiya on 15.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAStructBuild.h"
#include <assert.h>

#define TKAStructureSizeofTest(value) {\
size_t sizeValue = sizeof(value);\
printf(" size of  "#value" = %lu\n", sizeValue);\
}

void TKAStructureSizeTest() {
    
    TKAStructureNull structureNull;
    assert(0 == sizeof(structureNull));
    TKAStructureSizeofTest(structureNull);
    printf("\n");
    
    TKAStructureFirst structureTest;
    assert(0 != sizeof(structureTest));
    TKAStructureSizeofTest(structureTest);
    TKAStructureSizeofTest(structureTest.boolValueOne);
    TKAStructureSizeofTest(structureTest.boolValueOne);
    TKAStructureSizeofTest(structureTest.floatValue);
    TKAStructureSizeofTest(structureTest.integerValue);
    TKAStructureSizeofTest(structureTest.longLongValue);
    TKAStructureSizeofTest(structureTest.shortValueOne);
    TKAStructureSizeofTest(structureTest.doubleValue);
    TKAStructureSizeofTest(structureTest.stringValue);
    printf("\n");
    
    TKAStructureSecond structureTest2;
    assert(0 != sizeof(structureTest2));
    TKAStructureSizeofTest(structureTest2);
    TKAStructureSizeofTest(structureTest2.boolValueOne);
    TKAStructureSizeofTest(structureTest2.floatValue);
    TKAStructureSizeofTest(structureTest2.integerValue);
    TKAStructureSizeofTest(structureTest2.longLongValue);
    TKAStructureSizeofTest(structureTest2.shortValueOne);
    TKAStructureSizeofTest(structureTest2.doubleValue);
    TKAStructureSizeofTest(structureTest2.stringValue);
    printf("\n");
    
    TKAStructureUnion structureTest3;
    assert(0 != sizeof(structureTest3));
    TKAStructureSizeofTest(structureTest3);
    TKAStructureSizeofTest(structureTest3.bits);
    TKAStructureSizeofTest(structureTest3.floatValue);
    TKAStructureSizeofTest(structureTest3.integerValue);
    TKAStructureSizeofTest(structureTest3.longLongValue);
    TKAStructureSizeofTest(structureTest3.shortValueOne);
    TKAStructureSizeofTest(structureTest3.doubleValue);
    TKAStructureSizeofTest(structureTest3.stringValue);
}


#define TKAStructureOffsetPlaceTest(type, value) {\
        size_t placeValue = offsetof(type, value);\
        printf(" offset of  "#type"."#value" = %lu\n", placeValue);\
        }

void TKAStructurePlaceTest() {

    TKAStructureFirst structureTest;
    assert(0 != sizeof(structureTest));
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueOne);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueTwo);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueThree);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueFour);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueFive);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, boolValueSix);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, floatValue);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, integerValue);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, longLongValue);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, shortValueOne);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, shortValueTwo);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, shortValueThree);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, doubleValue);
    TKAStructureOffsetPlaceTest(TKAStructureFirst, stringValue);
    
    printf("\n");
    TKAStructureSecond structureTest2;
    assert(0 != sizeof(structureTest2));
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueOne);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueTwo);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueThree);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueFour);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueFive);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, boolValueSix);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, floatValue);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, integerValue);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, longLongValue);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, shortValueOne);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, shortValueTwo);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, shortValueThree);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, doubleValue);
    TKAStructureOffsetPlaceTest(TKAStructureSecond, stringValue);
    
    printf("\n");
    TKAStructureUnion structureTest3;
    assert(0 != sizeof(structureTest3));
    TKAStructureOffsetPlaceTest(TKAStructureUnion, bits);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, floatValue);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, integerValue);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, longLongValue);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, shortValueOne);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, shortValueTwo);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, shortValueThree);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, doubleValue);
    TKAStructureOffsetPlaceTest(TKAStructureUnion, stringValue);
}

void TKAStructureMain(){
    
    TKAStructureSizeTest();
    printf("\n");
    TKAStructurePlaceTest();
    
}
