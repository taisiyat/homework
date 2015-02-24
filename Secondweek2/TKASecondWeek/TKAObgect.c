//
//  TKAObgect.c
//  TKASecondWeek
//
//  Created by Taisiya on 19.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAObgect.h"

TKAObject *TKAObjectCreate() {
    TKAObject *object = malloc(sizeof(*object));
    object->_referenceCount = 1;
    return object;
}

void TKAObjectRetain(TKAObject *object) {
    object->_referenceCount++;
}

void TKAObjectRelease(TKAObject *object) {
    object->_referenceCount--;
    if (0 == object->_referenceCount){
        TKAObjectDeallocate(object);
    }
}

void TKAObjectDeallocate(TKAObject *object) {
    if (Null != object->_referenceCount) {
        free(object->_referenceCount);
    }
    free(object);
}
