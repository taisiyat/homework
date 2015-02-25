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
void TKAOrderByteOutputTest();

#pragma mark -
#pragma mark Public Declarations

extern
TKAOrderByte TKAOrderByteCheck();

extern
void TKAByteReversFunction(void *valueRef, size_t size);

extern
void TKAByteOutputFunction(void *valueRef, size_t size);

#pragma mark -
#pragma mark Private Implementations

void TKAOrderByteOutputTest() {
    
    if (TKAOrderByteCheck()) {
        printf("Wrong order of writing bytes. \n");
    } else {
        printf("Correct order of writing bytes.\n");
    }
}

#pragma mark -
#pragma mark Public Implementations

TKAOrderByte TKAOrderByteCheck() {
    int valueTest = 1;
    
    return (1 == *(unsigned char *)&valueTest) ? TKAOrderWrong : TKAOrderCorrect;
}

void TKAByteOutputFunction(void *valueRef, size_t size) {
    unsigned char *charValueRef = (unsigned char *)valueRef;
    uint8_t byteIter = 0;
    
    for (uint8_t iter = 0; iter < size; iter++) {
        byteIter = (TKAOrderWrong == TKAOrderByteCheck()) ? ((size - 1) - iter) : iter ;
        TKABitOutputFunction(charValueRef[byteIter]);
        printf(" ");
    }
    printf(" \n");
}

void TKAByteReversFunction(void *valueRef, size_t size) {
    unsigned char *charValueRef = (unsigned char *)valueRef;
    unsigned char charValue = 0;
    if (1 < size) {
        for (uint8_t byteIter = 0; byteIter < size/2; byteIter++) {
            charValue = charValueRef[byteIter];
            charValueRef[byteIter] = charValueRef[(size - 1) - byteIter];
            charValueRef[(size - 1) - byteIter] = charValue;
        }
    }
}

void TKAByteOutputMain() {
    int someValue = 9999;
    int one = 1;
    char someChar = 'd';
    int value = 1000000000;
 //   TKAFlagOutput orderOutput = TKAOriginalOutput;
    
    TKAOrderByteOutputTest();
    
    printf(" \n");
    printf("Value = '%c', %d  by bits = ", one, one);
    TKAByteOutputFunction(&one, sizeof(one));
    TKAByteReversFunction(&one, sizeof(one));
    printf("Revers value = '%c', %d  by bits = ", one, one);
    TKAByteOutputFunction(&one, sizeof(one));
    printf(" \n");
    printf("value = '%c', %d  by bits = ", someValue, someValue);
    TKAByteOutputFunction(&someValue, sizeof(someValue));
    TKAByteReversFunction(&someValue, sizeof(someValue));
    printf("Revers value = '%c', %d  by bits = ", someValue, someValue);
    TKAByteOutputFunction(&someValue, sizeof(someValue));
    printf(" \n");
    printf("value = '%c', %d  by bits = ", someChar, someChar);
    TKAByteOutputFunction(&someChar, sizeof(someChar));
    TKAByteReversFunction(&someChar, sizeof(someChar));
    printf("Revers value = '%c', %d  by bits = ", someChar, someChar);
    TKAByteOutputFunction(&someChar, sizeof(someChar));
    printf(" \n");
    printf("value = '%c', %d  by bits = ", value, value);
    TKAByteOutputFunction(&value, sizeof(value));
    TKAByteReversFunction(&value, sizeof(value));
    printf("Revers value = '%c', %d  by bits = ", value, value);
    TKAByteOutputFunction(&value, sizeof(value));
    printf(" \n");
    };