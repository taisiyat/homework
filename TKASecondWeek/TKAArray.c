//
//  TKAArray.c
//  TKASecondWeek
//
//  Created by Taisiya on 01.03.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAArray.h"
//#include "TKAHuman.h"
//
//#pragma mark -
//#pragma mark Privat Declarations
//
//static
//void TKAArrayDealloc(TKAArray *array);
//
//#pragma mark -
//#pragma mark Privat Implementations
//
//void TKAArrayDealloc(TKAArray *array) {
//    if (NULL != array->_child) {
//        
//        for (uint16_t iter = 0; iter < array->_length; iter++) {
//            TKAArrayAddChildIndex(array, NULL, iter);
//            //            if (NULL != array->_child[iter]) {
//            //                TKAHumanRelease(array->_child[iter]);
//            //            }
//            
//        }
//    }
//    free(array);
//}
//
//#pragma mark -
//#pragma mark Public Implementations
//
//TKAArray *TKAArrayCreate() {
//    TKAArray *array = calloc(1, sizeof(*array));
//    array->_referenceCount = 1;
//    
//    return array;
//}
//
//void TKAArrayRetain(TKAArray *array) {
//    array->_referenceCount++;
//}
//
//void TKAArrayRelease(TKAArray *array) {
//    array->_referenceCount--;
//    
//    if (0 == array->_referenceCount) {
//        TKAArrayDealloc(array);
//    }
//    
//}
//
//void TKAArraySetLength(TKAArray *array, uint16_t length) {
//    if (array->_length != length) {
//        array->_child = realloc(array->_child, length * sizeof(*array->_child));
//        
//        if (array->_length < length) {
//            memset(array->_child + array->_length, 0, length - array->_length);
//        }
//        
//        array->_length = length;
//    }
//}
//
//uint16_t TKAArrayGetLength(TKAArray *array) {
//    
//    return array->_length;
//}
//
//void TKAArrayAddChild(TKAArray *array, TKAHuman *child) {
//    bool addFlag = false;
//    
//    for (uint16_t iter = 0; iter < array->_length; iter ++) {
//        if (array->_child[iter] != child) {
//            if (array->_child[iter] == NULL) {
//                
//                array->_child[iter] = child;
//                if (NULL != array->_child[iter]) {
//                    TKAHumanRetain(child);
//                }
//                
//                addFlag = true;
//            }
//        }
//    }
//    
//    if (false == addFlag) {
//        uint16_t shortLength = TKAArrayGetLength(array);
//        TKAArraySetLength(array, shortLength + 1);
//        
//        array->_child[array->_length -1] = child;
//        if (NULL != array->_child[array->_length - 1]) {
//            TKAHumanRetain(child);
//        }
//        
//        addFlag=true;
//    }
//}
//
//void *TKAArrayGetArrayOfChild(TKAArray *array) {
//    
//    return array->_child;
//}
//
//TKAHuman *TKAArrayGetChildIndex(TKAArray *array, uint16_t index) {
//    
//    if (array->_length > index) {
//        
//        return array->_child[index];
//    }
//    //void metod or assert or exit;
//    return NULL;
//}
//
//void TKAArrayAddChildIndex(TKAArray *array, void *child, uint16_t index) {
//    if (array->_length <= index) {
//        TKAArraySetLength(array, index + 1);
//    }
//    
//    if (array->_length > index) {
//        if (array->_child[index] != child) {
//            
//            if (array->_child[index] != NULL) {
//                TKAHumanRelease(array->_child[index]);
//            }
//            
//            array->_child[index] = child;
//            if (NULL != array->_child[index]) {
//                TKAHumanRetain(child);
//            }
//            
//        }
//    }
//    
//}
//
//void TKAArrayOutput(TKAArray *array) {
//    
//    for (uint16_t iter = 0; iter < array->_length; iter++) {
//        
//        if (array->_child[iter] != NULL) {
//            TKAStringOutput(TKAHumanGetName(array->_child[iter]));
//            printf(" ");
//        }
//        
//    }
//}
