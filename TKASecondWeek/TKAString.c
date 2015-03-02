//
//  TKAString.c
//  TKASecondWeek
//
//  Created by Taisiya on 01.03.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAString.h"

#pragma mark -
#pragma mark Privat Declarations

//static
//void TKAStringDealloc(TKAString *string);

#pragma mark -
#pragma mark Privat Implementations

void __TKAStringDeallocate(TKAString *string) {
    if (NULL != string->_data) {
        free(string->_data);
 //       string->_data = NULL;
    }
    
    __TKAObjectDeallocate(string);
    free(string);
}

#pragma mark -
#pragma mark Public Implementations

TKAString *TKAStringCreate() {
    TKAString *string = calloc(1, sizeof(*string));
    TKAObject *object = (TKAObject *)string;
    object->_referenceCount = 1;
    
    return string;
}

void TKAStringRetain(TKAString *string) {
    TKAObjectRetain(string);
    //    string->_referenceCount++;
}

void TKAStringRelease(TKAString *string) {
    TKAObjectRelease(string);
//    string->_referenceCount--;
    if (0 == TKAObjectGetReferenceCount(string)) {
        __TKAStringDeallocate(string);
    }
}

void TKAStringSetLength(TKAString *string, uint64_t length) {
    if (string->_length != length) {
        string->_data = realloc(string->_data, length * sizeof(*string->_data));
        
        if (string->_length < length) {
            memset(string->_data + string->_length, 0, length - string->_length);
        }
        
        string->_length = length;
    }
}

uint64_t TKAStringGetLength(TKAString *string) {
    
    return string->_length;
}

void TKAStringCopyData(TKAString *string, char *data, uint64_t length) {
    
    TKAStringSetLength(string, length);
    memmove(string->_data, data, length);
}

char *TKAStringGetData(TKAString *string) {
    
    return string->_data;
}

void TKAStringOutput(TKAString *string) {
 
    printf("%s", TKAStringGetData(string));
}

