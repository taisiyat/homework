//
//  TKAObgect.h
//  TKASecondWeek
//
//  Created by Taisiya on 19.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef __TKASecondWeek__TKAObgect__
#define __TKASecondWeek__TKAObgect__

#include <stdio.h>
#include <stdlib.h>


struct TKAObject {
    uint64_t _referenceCount;
    
};
typedef struct TKAObject TKAObject;

extern
TKAObject *TKAObjectCreate();

extern
void TKAObjectRetain(void *object);

extern
void TKAObjectRelease(void *object);

extern
void TKAObjectDeallocate(void *object);


#endif /* defined(__TKASecondWeek__TKAObgect__) */
