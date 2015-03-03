//
//  TKAByteOutput.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAByteOutput.h"

#pragma mark -
#pragma mark Private Declarations

static
void TKAEndianByteCheckOutput();

#pragma mark -
#pragma mark Public Declarations

extern
void TKAByteReverseFunction(void *valueRef, size_t size);

extern
void TKAByteOutputFunction(void *valueRef, size_t size);

#pragma mark -
#pragma mark Private Implementations

void TKAEndianByteCheckOutput() {

    if (TKAEndianByteCheck()) {
        printf("little-endian system of ordering data in a computer's memory \n");

    } else {
        
        printf("big-endian system of ordering data in a computer's memory \n");
    }
    
}

#pragma mark -
#pragma mark Public Implementations

TKAEndian TKAEndianByteCheck() {
    uint16_t valueTest = 1;
    
    return (1 == *(uint8_t *)&valueTest) ? TKALittleEndian : TKABigEndian;
}

void TKAByteOutputFunction(void *value, size_t size) {
    uint8_t *valueRef = (uint8_t *)value;
    uint8_t byteIter = 0;
    
    for (uint8_t iter = 0; iter < size; iter++) {
        byteIter = (TKALittleEndian == TKAEndianByteCheck()) ? ((size - 1) - iter) : iter ;
        
        TKABitOutputFunction(valueRef[byteIter]);

        printf(" ");
    }
    
    printf(" \n");
}

void TKAByteReverseFunction(void *value, size_t size) {
    uint8_t *valueRef = (uint8_t *)value;
    uint8_t charValue = 0;
    
    if (size > 1) {
       
        for (uint8_t byteIter = 0; byteIter < size/2; byteIter++) {
            charValue = valueRef[byteIter];
            valueRef[byteIter] = valueRef[(size - 1) - byteIter];
            valueRef[(size - 1) - byteIter] = charValue;
        }
    
    }
}

#define TKAByteOutputTest(value)\
    {\
        printf("Value = '%c', %d  by bits = ", value, value);\
        TKAByteOutputFunction(&value, sizeof(value));\
        TKAByteReverseFunction(&value, sizeof(value));\
        printf("Revers value = '%c', %d  by bits = ", value, value);\
        TKAByteOutputFunction(&value, sizeof(value));\
        printf(" \n");\
    }

void TKAByteOutputMain() {
    int someValue = 9999;
    int one = 1;
    char someChar = 'd';
    int value = 1000000000;

    TKAEndianByteCheckOutput();
    printf(" \n");
    
    TKAByteOutputTest(one);
    TKAByteOutputTest(someValue);
    TKAByteOutputTest(someChar);
    TKAByteOutputTest(value);

}

#undef TKAByteOutputTest
