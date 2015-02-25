//
//  TKAMacros.c
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAMacros.h"

TKAOutputFuction(int, d);
TKAOutputFuction(char, c);
TKAOutputFuction(float, f);

void TKAOutputMain() {
    int valueInt = 6;
    float valueFloat = 3.5;
    char valueChar = 'A';
   
    TKAOutput(int, valueInt);
    TKAOutput(float, valueFloat);
    TKAOutput(char, valueChar);
}
