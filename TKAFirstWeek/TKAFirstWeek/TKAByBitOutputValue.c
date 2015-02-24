//
//  TKAByBiteOutputValue.c
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAByBitOutputValue.h"

void TKAByBitOutputFunction(char value) {
    printf("value = '%c', %d by bits = ", value, value);
    if (value<0) {
        printf("%u ", 0 != (value & 128));
        value = value * -1;
    }
    else {
        printf("%u ", 0 != (value & 128));
    }
    unsigned char mask = pow(2, 6);
    for (int iter = 0; iter < 8 * sizeof(value)-1; iter++) {
        printf("%u ", 0!=(value & mask));
        mask /= 2;
    }
    printf("\n");
}

void TKAByBitOutputValueMain() {
    signed char valueChar = 'a';
    signed char valueCharint = -16;
    TKAByBitOutputFunction(valueChar);
    TKAByBitOutputFunction(valueCharint);
 
}