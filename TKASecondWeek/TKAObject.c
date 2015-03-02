//
//  TKAObgect.c
//  TKASecondWeek
//
//  Created by Taisiya on 19.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAObject.h"

#pragma mark -
#pragma mark Public Implementations

void *__TKAObjectCreate(size_t objectSize, TKADeallocateCallback deallocateCallback) {
    TKAObject *object = calloc(1, objectSize);
    object->_referenceCount = 1;
    object->_deallocateCallback = deallocateCallback;
    
    return object;
}

void *TKAobjectRetain(void *object) {
    if (NULL != object) {
        ((TKAObject *) object)->_referenceCount++;
    }
    
    return object;
}

void TKAObjectRelease(void *voidObject) {
    if (NULL == voidObject) {
        
        return;
    }
    
    TKAObject *object = (TKAObject *)voidObject;
    object->_referenceCount--;
    
    if (0 == object->_referenceCount) {
        object->_deallocateCallback(object);
    }
    
}

uint64_t TKAObjectGetReferenceCount(void *object) {
    if (NULL == object) {
        
        return 0;
    }
    
    return ((TKAObject *)object)->_referenceCount;
}

void __TKAObjectDeallocate(void *object) {
    
    free(object);
}

