//
//  TKAStructBuild.c
//  TKAFirstWeek
//
//  Created by Taisiya on 15.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAStruct.h"
#include <assert.h>

#define TKAStructureOffsetElementTest(type, value) \
        {\
        size_t placeValue = offsetof(type, value);\
        printf(" offset of  "#type"."#value" = %lu\n", placeValue);\
        }

#define TKAStructSizeTestFunctionDef(type) \
    void TKAStructSizeTest_##type() {\
        type *structure = malloc(sizeof(*structure));\
        printf(" size of structure "#type" = %lu\n", sizeof(*structure));\
        free(structure);\
    }

#define TKAStructSizeTestDef(type) \
    TKAStructSizeTest_##type();

#define TKAStructSetElementsTestFunctionDef(type) \
    void TKAStructSetElementsTest_##type() {\
        type *structure = malloc(sizeof(*structure));\
        TKAStructureOffsetElementTest(type, boolValueOne);\
        TKAStructureOffsetElementTest(type, boolValueTwo);\
        TKAStructureOffsetElementTest(type, boolValueThree);\
        TKAStructureOffsetElementTest(type, boolValueFour);\
        TKAStructureOffsetElementTest(type, boolValueFive);\
        TKAStructureOffsetElementTest(type, boolValueSix);\
        TKAStructureOffsetElementTest(type, floatValue);\
        TKAStructureOffsetElementTest(type, integerValue);\
        TKAStructureOffsetElementTest(type, longLongValue);\
        TKAStructureOffsetElementTest(type, shortValueOne);\
        TKAStructureOffsetElementTest(type, shortValueTwo);\
        TKAStructureOffsetElementTest(type, shortValueThree);\
        TKAStructureOffsetElementTest(type, doubleValue);\
        TKAStructureOffsetElementTest(type, stringValue);\
        free(structure);\
    }

#define TKAStructSetElementsTestDef(type) \
    TKAStructSetElementsTest_##type();

void TKAStructSetElementsTest_Union() {
    TKAStructWithUnion *structure = malloc(sizeof(*structure));
    TKAStructureOffsetElementTest(TKAStructWithUnion, bitsFild);
    TKAStructureOffsetElementTest(TKAStructWithUnion, floatValue);
    TKAStructureOffsetElementTest(TKAStructWithUnion, integerValue);
    TKAStructureOffsetElementTest(TKAStructWithUnion, longLongValue);
    TKAStructureOffsetElementTest(TKAStructWithUnion, shortValueOne);
    TKAStructureOffsetElementTest(TKAStructWithUnion, shortValueTwo);
    TKAStructureOffsetElementTest(TKAStructWithUnion, shortValueThree);
    TKAStructureOffsetElementTest(TKAStructWithUnion, doubleValue);
    TKAStructureOffsetElementTest(TKAStructWithUnion, stringValue);
    free(structure);
}

TKAStructSizeTestFunctionDef(TKAStructFirst);
TKAStructSizeTestFunctionDef(TKAStructSecond);
TKAStructSizeTestFunctionDef(TKAStructWithUnion);
TKAStructSetElementsTestFunctionDef(TKAStructFirst);
TKAStructSetElementsTestFunctionDef(TKAStructSecond);

void TKAStructMain(){
    TKAStructSizeTestDef(TKAStructFirst);
    TKAStructSetElementsTestDef(TKAStructFirst)
    printf(" \n");
    TKAStructSizeTestDef(TKAStructSecond);
    TKAStructSetElementsTestDef(TKAStructSecond)
    printf(" \n");
    TKAStructSizeTestDef(TKAStructWithUnion);
    TKAStructSetElementsTest_Union();
}
