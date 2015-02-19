//
//  TKABitOutput.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKABitOutput.h"

void TKABitOutputFunction(unsigned char value) {
    unsigned char mask = pow(2, 7);
    for (int iter = 0; iter < 8 * sizeof(value); iter++) {
        printf("%u ", 0!=(value & mask));
        mask /= 2;
    }
}

void TKABitOutput(unsigned char value) {
    printf("value = '%c', %d  by bits = ", value, value);
    TKABitOutputFunction(value);
    printf("\n");
}

void TKABitOutputMain() {
    unsigned char valueChar = 'a';
    unsigned char valueInt = 16;
    TKABitOutput(valueChar);
    TKABitOutput(valueInt);
}