//
//  TKAOutputMamaPapa.h
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKAFirstWeek__TKAMamaPapaOutput__
#define __TKAFirstWeek__TKAMamaPapaOutput__

#include <stdio.h>

enum TKAFlagMamaPapa {
    TKAFlagNull,
    TKAFlagMama,
    TKAFlagPapa,
    TKAFlagMamaPapa,
}; typedef enum TKAFlagMamaPapa TKAFlagMP;

TKAFlagMP TKAMamaPapaOutputCompare();
void TKAMamaPapaOutputMain();


#endif /* defined(__TKAFirstWeek__TKAOutputMamaPapa__) */
