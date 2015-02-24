//
//  TKAMacros.h
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAFirstWeek__TKAMacros__
#define __TKAFirstWeek__TKAMacros__

#include <stdio.h>

#define TKAOutputValueTypeSpecific(type, typeSpecific)\
        void TKAOutput_##type(type typeValue) {\
        printf(" %"#typeSpecific" is "#type" \n",typeValue);\
        }

#define TKAOutputValue(type, typeValue)\
        TKAOutput_##type(typeValue)

void TKAOutputValueTypeMain();

#endif /* defined(__TKAFirstWeek__TKAMacros__) */
