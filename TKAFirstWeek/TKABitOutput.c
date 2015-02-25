//
//  TKABitOutput.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKABitOutput.h"

#pragma mark - 
#pragma mark Private Declarations

static
void TKABitOutput(unsigned char value);

#pragma mark -
#pragma mark Private Implementations

void TKABitOutput(unsigned char value) {
    printf("value = '%c', %d  by bits = ", value, value);

    TKABitOutputFunction(value);
    printf("\n");
}

#pragma mark -
#pragma mark Public Implementations

void TKABitOutputFunction(unsigned char value) {
    unsigned char mask = pow(2, 7);
 
    for (int iter = 0; iter < 8 * sizeof(value); iter++) {
        printf("%u", 0!=(value & mask));
        mask /= 2;
    }
}

void TKABitOutputMain() {
    unsigned char valueChar = 'a';
    unsigned char valueInt = 16;

    TKABitOutput(valueChar);
    TKABitOutput(valueInt);
}