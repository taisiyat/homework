//
//  TKAMacros.c
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAMacros.h"

TKAOutputValueTypeSpecific(int, d);
TKAOutputValueTypeSpecific(char, c);
TKAOutputValueTypeSpecific(float, f);

void TKAOutputValueTypeMain() {
    
    int valueInt = 6;
    float valueFloat = 3.5;
    char valueChar = 'A';
   
    TKAOutputValue(int, valueInt);
    TKAOutputValue(float, valueFloat);
    TKAOutputValue(char, valueChar);
}
