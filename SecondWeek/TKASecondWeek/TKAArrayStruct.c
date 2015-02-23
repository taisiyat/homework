//
//  TKAArrayStruct.c
//  TKASecondWeek
//
//  Created by Taisiya on 21.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAArrayStruct.h"

#pragma mark -
#pragma mark Privat Declarations

static
void TKAArrayStructDealloc(TKAArrayStruct *array);

#pragma mark -
#pragma mark Privat Implementations

void TKAArrayStructDealloc(TKAArrayStruct *array) {
    if (NULL != array->_child) {
        free(array->_child);
    }
    free(array);
}

#pragma mark -
#pragma mark Public Implementations

TKAArrayStruct *TKAArrayStructCreate() {
    TKAArrayStruct *array =calloc(1, sizeof(*array));
    array->_referenceCount = 1;
    array->_lenght = 20;
    return array;
}

void TKAArrayStructRetain(TKAArrayStruct *array) {
    array->_referenceCount++;
}

void TKAArrayStructRelease(TKAArrayStruct *array) {
    array->_referenceCount--;
    if (0 == array->_referenceCount) {
        TKAArrayStructDealloc(array);
    }
}

void TKAArrayStructSetLength(TKAArrayStruct *array, uint64_t length) {
    if (array->_lenght != length) {
        array->_child = realloc(array->_child, length * sizeof(*array->_child));
        memset(array->_child + array->_lenght, 0, length - array->_lenght);
        array->_lenght = length;
    }
}

uint64_t TKAArrayStructGetLength(TKAArrayStruct *array) {
    return array->_lenght;
}


void TKAArrayStructSetData(TKAArrayStruct *array, void *data) {
    array->_data = data;
}

void *TKAArrayStructGetData(TKAArrayStruct *array) {
    return array->_data;
}
