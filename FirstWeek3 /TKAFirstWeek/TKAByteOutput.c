//
//  TKAByteOutput.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAByteOutput.h"

TKAOrderByte TKAOrderByteOutput() {
    int valueTest = 1;
    unsigned char *valueRef = (unsigned char *)&valueTest;
    if (valueRef[sizeof(valueTest)-1] == 0) {
        return TKAOrderWrong;
    } else {
        return TKAOrderCorrect;
    }
}

void TKAByteOutputFuction(void *valueRef, size_t size) {
    unsigned char *charValueRef = (unsigned char *)valueRef;
    unsigned char charValue = 0;
    
    for (int byteIter = 0; byteIter <= size - 1; byteIter++) {
        if (TKAOrderWrong == TKAOrderByteOutput()) {
            charValue = charValueRef[(size - 1) - byteIter];
            TKABitOutputFunction(charValue);
        } else {
            charValue = charValueRef[byteIter];
            TKABitOutputFunction(charValue);
        }
        printf(" ");
    }
    printf(" \n");
}

void TKAByteOutputFuctionRevers(void *valueRef, size_t size, TKAFlagOutput revers) {
    unsigned char *charValueRef = (unsigned char *)valueRef;
    unsigned char charValue = 0;
    
    for (int byteIter = 0; byteIter <= size - 1; byteIter++) {
        if (TKAOriginalOutput == revers) {
            charValue = charValueRef[byteIter];
            TKABitOutputFunction(charValue);
        } else {
            charValue = charValueRef[(size - 1) - byteIter];
            TKABitOutputFunction(charValue);
        }
        printf(" ");
    }
    printf(" \n");
}

void TKAOrderByteOutputTest() {
    if (TKAOrderByteOutput()) {
        printf("Wrong order of writing bytes. \n");
    } else {
        printf("Correct order of writing bytes.\n");
    }
}

void TKAByteOutputMain() {
    int someValue = 9999;
    int one = 1;
    char someChar = 'd';
    int value = 1000000000;
    TKAFlagOutput reversFlag = TKAOriginalOutput;
    
    TKAOrderByteOutputTest();
    
    printf("value = '%c', %d  by bits = ", one, one);
    TKAByteOutputFuctionRevers(&one, sizeof(one), reversFlag);
    printf("value = '%c', %d  by bits = ", someValue, someValue);
    TKAByteOutputFuctionRevers(&someValue, sizeof(someValue), reversFlag);
    printf("value = '%c', %d  by bits = ", someChar, someChar);
    TKAByteOutputFuctionRevers(&someChar, sizeof(someChar), reversFlag);
    printf("value = '%c', %d  by bits = ", value, value);
    TKAByteOutputFuctionRevers(&value, sizeof(value), reversFlag);


    printf(" \n");
    printf("value = '%c', %d  by bits = ", one, one);
    TKAByteOutputFuction(&one, sizeof(one));
    printf("value = '%c', %d  by bits = ", someValue, someValue);
    TKAByteOutputFuction(&someValue, sizeof(someValue));
    printf("value = '%c', %d  by bits = ", someChar, someChar);
    TKAByteOutputFuction(&someChar, sizeof(someChar));
    printf("value = '%c', %d  by bits = ", value, value);
    TKAByteOutputFuction(&value, sizeof(value));
    printf("\n");
};