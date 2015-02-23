//
//  TKAObjectString.c
//  TKASecondWeek
//
//  Created by Taisiya on 19.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAObjectString.h"

#pragma mark -
#pragma mark Privat Declarations

static
void TKAStringDealloc(TKAString *string);

#pragma mark -
#pragma mark Privat Implementations

void TKAStringDealloc(TKAString *string) {
    if (NULL != string->_data) {
        free(string->_data);
    }
    free(string);
}

#pragma mark -
#pragma mark Public Implementations

TKAString *TKAStringCreate() {
    TKAString *string =malloc(sizeof(*string));
    string->_data=NULL;
    string->_referenceCount=1;
    return string;
}

void TKAStringRetain(TKAString *string) {
    string->_referenceCount++;
}

void TKAStringRelease(TKAString *string) {
    string->_referenceCount--;
    if (0 == string->_referenceCount) {
        TKAStringDealloc(string);
    }
}

void TKAStringSetLength(TKAString *string, uint64_t length) {
    if (string->_lenght != length) {
        string->_data = realloc(string->_data, length * sizeof(*string->_data));
        memset(string->_data + string->_lenght, 0, length - string->_lenght);
        string->_lenght = length;
    }
}

uint64_t TKAStringGetLength(TKAString *string) {
    return string->_lenght;
}


void TKAStringSetData(TKAString *string, char *data) {
    string->_data = data;
}

char *TKAStringGetData(TKAString *string) {
    return string->_data;
}
