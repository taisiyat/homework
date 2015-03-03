//
//  TKAStructBuild.c
//  TKAFirstWeek
//
//  Created by Taisiya on 15.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAStruct.h"
//#include <assert.h>

#define TKAStructOffsetElementTest(type, value) \
        {\
        size_t placeValue = offsetof(type, value);\
        printf(" offset of  "#type"."#value" = %lu\n", placeValue);\
        }

#define TKAStructSizeTestFunction(type) \
    void TKAStructSizeTest_##type() {\
        type *structure = malloc(sizeof(*structure));\
        printf(" size of structure "#type" = %lu\n", sizeof(*structure));\
        free(structure);\
    }

#define TKAStructSizeTest(type) \
    TKAStructSizeTest_##type();

#define TKAStructOffsetTestFunction(type) \
    void TKAStructOffsetTest_##type() {\
        \
        type *structure = malloc(sizeof(*structure));\
        TKAStructOffsetElementTest(type, boolValueOne);\
        TKAStructOffsetElementTest(type, boolValueTwo);\
        TKAStructOffsetElementTest(type, boolValueThree);\
        TKAStructOffsetElementTest(type, boolValueFour);\
        TKAStructOffsetElementTest(type, boolValueFive);\
        TKAStructOffsetElementTest(type, boolValueSix);\
        TKAStructOffsetElementTest(type, floatValue);\
        TKAStructOffsetElementTest(type, integerValue);\
        TKAStructOffsetElementTest(type, longLongValue);\
        TKAStructOffsetElementTest(type, shortValueOne);\
        TKAStructOffsetElementTest(type, shortValueTwo);\
        TKAStructOffsetElementTest(type, shortValueThree);\
        TKAStructOffsetElementTest(type, doubleValue);\
        TKAStructOffsetElementTest(type, stringValue);\
        \
        free(structure);\
    }

#define TKAStructOffsetTest(type) \
    TKAStructOffsetTest_##type();

void TKAStructOffsetTest_Union() {
    TKAStructWithUnion *structure = malloc(sizeof(*structure));
    
    TKAStructOffsetElementTest(TKAStructWithUnion, bitsFild);
    TKAStructOffsetElementTest(TKAStructWithUnion, floatValue);
    TKAStructOffsetElementTest(TKAStructWithUnion, integerValue);
    TKAStructOffsetElementTest(TKAStructWithUnion, longLongValue);
    TKAStructOffsetElementTest(TKAStructWithUnion, shortValueOne);
    TKAStructOffsetElementTest(TKAStructWithUnion, shortValueTwo);
    TKAStructOffsetElementTest(TKAStructWithUnion, shortValueThree);
    TKAStructOffsetElementTest(TKAStructWithUnion, doubleValue);
    TKAStructOffsetElementTest(TKAStructWithUnion, stringValue);
    
    free(structure);
}

TKAStructSizeTestFunction(TKAStructFirst);
TKAStructSizeTestFunction(TKAStructSecond);
TKAStructSizeTestFunction(TKAStructWithUnion);
TKAStructOffsetTestFunction(TKAStructFirst);
TKAStructOffsetTestFunction(TKAStructSecond);

void TKAStructMain(){
    TKAStructSizeTest(TKAStructFirst);
    TKAStructOffsetTest(TKAStructFirst);
    printf(" \n");
    
    TKAStructSizeTest(TKAStructSecond);
    TKAStructOffsetTest(TKAStructSecond);
    printf(" \n");
    
    TKAStructSizeTest(TKAStructWithUnion);
    TKAStructOffsetTest_Union();
}

#undef TKAStructOffsetTest//
#undef TKAStructOffsetTestFunction//
#undef TKAStructSizeTest//
#undef TTKAStructSizeTestFunction//
#undef TKAStructOffsetElementTest//

