//
//  TKAByByteOutputValue.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAByteOutputValue.h"

bool TKAHowByteOutput() {
    int valueTest = 1;
    void *valueRef = &valueTest;
    unsigned char *charValueRef = (unsigned char *)valueRef;
    unsigned char charValue = 0;
    bool flagRecord = 0;
    
    charValue = charValueRef[sizeof(valueTest)-1];
    for (int bitIter = 0; bitIter < 8; bitIter++) {
        flagRecord = flagRecord+(0 != (charValue & 128));
        charValue <<= 1;
    }
    
    if (flagRecord == 0) {
        printf("irregular record of byte \n");
        return flagRecord;
    }
    else { printf("regular record of byte \n");
        return 1;
    }
}

void TKABitByteOutput(void *valueRef, size_t size) {
    unsigned char *charValueRef = (unsigned char *)valueRef;
    unsigned char charValue = 0;
    
    if (TKAHowByteOutput())
    for (long int byteIter = 0; byteIter <= size - 1; byteIter++) {
        charValue = charValueRef[byteIter];
        for (int bitIter = 0; bitIter < 8; bitIter++) {
            printf("%u", 0 != (charValue & 128));
            charValue <<= 1;
        }
    }
    else
    for (long int byteIter = size - 1; byteIter >= 0; byteIter--) {
        charValue = charValueRef[byteIter];
        for (int bitIter = 0; bitIter < 8; bitIter++) {
            printf("%u", 0 != (charValue & 128));
            charValue <<= 1;
        }
    };
    printf("\n");
}

void TKAByteOutputValueMain() {
    int someValue = 9999;
    int one = 1;
    char someChar = 'd';
    int value = 1000000000;
    
    TKABitByteOutput(&someValue, sizeof(someValue));
    TKABitByteOutput(&one, sizeof(one));
    TKABitByteOutput(&someChar, sizeof(someChar));
    TKABitByteOutput(&value, sizeof(value));
    printf("\n");
};