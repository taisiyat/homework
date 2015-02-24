//
//  TKAArrayStruct.c
//  TKASecondWeek
//
//  Created by Taisiya on 21.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAArrayStruct.h"
#include "TKAHumanStruct.h"

#pragma mark -
#pragma mark Privat Declarations

static
void TKAArrayStructDealloc(TKAArrayStruct *array);

#pragma mark -
#pragma mark Privat Implementations

void TKAArrayStructDealloc(TKAArrayStruct *array) {
    if (NULL != array->_data) {
        for (uint64_t incr = 0; incr < array->_lenght; incr++)
       TKAHumanStructRelease(array->_data[incr]);
    }
    free(array);
}

#pragma mark -
#pragma mark Public Implementations

TKAArrayStruct *TKAArrayStructCreate() {
    TKAArrayStruct *array =calloc(1, sizeof(*array));
    array->_referenceCount = 1;
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

void TKAArrayStructSetLenght(TKAArrayStruct *array, uint64_t lenght) {
    if (array->_lenght != lenght) {
        array->_data = realloc(array->_data, lenght * sizeof(*array->_data));
        memset(array->_data + array->_lenght, 0, lenght - array->_lenght);
        array->_lenght = lenght;
    }
}

uint64_t TKAArrayStructGetLenght(TKAArrayStruct *array) {
    return array->_lenght;
}

void TKAArrayStructSetData(TKAArrayStruct *array, TKAHumanStruct *data) {
    bool setFlag = false;
    for (int incr = 0; incr <= array->_lenght-1; incr ++) {
        if (array->_data[incr]==NULL) {
            array->_data[incr] = data;
            setFlag = true;
        }
     }
    if (false == setFlag) {
        TKAArrayStructSetLenght(array, TKAArrayStructGetLenght(array)+1);
        array->_data[array->_lenght-1] = data;
        setFlag=true;
    }
}

void *TKAArrayStructGetData(TKAArrayStruct *array) {
    return array->_data;
}

TKAHumanStruct *TKAArrayStructGetDataIndex(TKAArrayStruct *array, uint64_t index) {
    if (array->_lenght >= index) {
       return array->_data[index];
    }
    return NULL;
}

void TKAArrayStructSetDataIndex(TKAArrayStruct *array, void *data, uint64_t index) {
    bool setFlag = false;
    if (array->_lenght >= index) {
        if (array->_data[index] == NULL) {
            array->_data[index] = data;
            setFlag = true;
        } else {
            setFlag = false;
        }
    }
}



