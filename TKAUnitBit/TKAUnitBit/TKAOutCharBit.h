//
//  TKAOutCharBit.h
//  TKAUnitBit
//
//  Created by Taisiya on 12.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAUnitBit__TKAOutCharBit__
#define __TKAUnitBit__TKAOutCharBit__

#include <stdio.h>
#include <stdbool.h>

struct TKABitFieldChar {
       union {
          struct {
                bool b0 : 1;
                bool b1 : 1;
                bool b2 : 1;
                bool b3 : 1;
                bool b4 : 1;
                bool b5 : 1;
                bool b6 : 1;
                bool b7 : 1;
            } bits;
            uint8_t flags;
        } data;
    };
    typedef struct TKABitFieldChar TKABitFieldChar;

void OutChar(char OutCharValue);

#endif /* defined(__TKAUnitBit__TKAOutCharBit__) */
