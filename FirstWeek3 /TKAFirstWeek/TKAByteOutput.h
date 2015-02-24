//
//  TKAByteOutput.h
//  TKAFirstWeek
//
//  Created by Taisiya on 14.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAFirstWeek__TKAByteOutput__
#define __TKAFirstWeek__TKAByteOutput__

#include <stdio.h>
#include "TKABitOutput.h"

typedef enum {
    TKAReversedOutput,
    TKAOriginalOutput
} TKAFlagOutput;

typedef enum {
    TKAOrderCorrect,
    TKAOrderWrong
} TKAOrderByte;

extern
void TKAByteOutputMain();

#endif /* defined(__TKAFirstWeek__TKAByteOutput__) */
