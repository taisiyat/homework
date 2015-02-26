//
//  TKAStringStruct.c
//  TKASecondWeek
//
//  Created by Taisiya on 21.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAStringStruct.h"

#pragma mark -
#pragma mark Privat Declarations

static
void TKAStringStructDealloc(TKAStringStruct *string);

#pragma mark -
#pragma mark Privat Implementations

void TKAStringStructDealloc(TKAStringStruct *string) {
    if (NULL != string->_data) {
        free(string->_data);
    }
    free(string);
}

#pragma mark -
#pragma mark Public Implementations

TKAStringStruct *TKAStringStructCreate() {
    TKAStringStruct *string =calloc(1, sizeof(*string));
    string->_referenceCount=0;
    string->_lenght=1;
    return string;
}

void TKAStringStructRetain(TKAStringStruct *string) {
    string->_referenceCount++;
}

void TKAStringStructRelease(TKAStringStruct *string) {
    string->_referenceCount--;
    if (0 == string->_referenceCount) {
        TKAStringStructDealloc(string);
    }
}

void TKAStringStructSetLenght(TKAStringStruct *string, uint64_t lenght) {
    if (string->_lenght != lenght) {
        string->_data = realloc(string->_data, lenght * sizeof(*string->_data));
        if (string->_lenght < lenght) {
        memset(string->_data + string->_lenght, 0, lenght - string->_lenght);
        }
        string->_lenght = lenght;
    }
}

uint64_t TKAStringStructGetLenght(TKAStringStruct *string) {
    return string->_lenght;
}

void TKAStringStructCopyData(TKAStringStruct *string, char *data, uint64_t lenght) {
    memmove(string->_data, data, lenght);
}
                             
char *TKAStringStructGetData(TKAStringStruct *string) {
    return string->_data;
}
