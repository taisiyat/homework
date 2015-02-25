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

typedef enum {
    TKANone,
    TKAMama,
    TKAPapa,
    TKAMamaPapa,
}TKAMamaPapaResult;

extern
TKAMamaPapaResult TKAMamaPapaOutput();

extern
void TKAMamaPapaOutputMain();


#endif /* defined(__TKAFirstWeek__TKAOutputMamaPapa__) */
