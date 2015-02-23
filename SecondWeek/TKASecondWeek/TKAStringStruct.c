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
    string->_data=NULL;
    string->_lenght=0;
    string->_referenceCount=1;
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

void TKAStringStructSetLength(TKAStringStruct *string, uint64_t length) {
    if (string->_lenght != length) {
        string->_data = realloc(string->_data, length * sizeof(*string->_data));
        memset(string->_data + string->_lenght, 0, length - string->_lenght);
        string->_lenght = length;
    }
}

uint64_t TKAStringStructGetLength(TKAStringStruct *string) {
    return string->_lenght;
}

void TKAStringStructSetData(TKAStringStruct *string, char *data) {
    if (string->_lenght < sizeof(data)) {
        TKAStringStructSetLength(string, sizeof(data));
    }
    string->_data = data;
}
                             
char *TKAStringStructGetData(TKAStringStruct *string) {
    return string->_data;
}
