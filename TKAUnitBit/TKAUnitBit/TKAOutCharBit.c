//
//  TKAOutCharBit.c
//  TKAUnitBit
//
//  Created by Taisiya on 12.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAOutCharBit.h"
void OutChar(char OutCharValue){
    printf("%c  \n",OutCharValue);
    char *string = "a";
    
    
    
    
    
    for (int iter = 0; iter < 7; iter++) {
    char c = *(string + iter * sizeof(*string));
    char b = string[iter];
    printf("%d , %d  \n",c, b);
    }
    return;
    
}
