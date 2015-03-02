//
//  TKAStringTest.c
//  TKASecondWeek
//
//  Created by Taisiya on 01.03.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAStringTest.h"

#pragma mark -
#pragma mark Privat Declarations

static
void TKAStringTest();

#pragma mark -
#pragma mark Public Declarations

#pragma mark -
#pragma mark Privat Implementations

void TKAStringTest() {
    TKAString * stringOne = TKAStringCreate();

    TKAStringCopyData(stringOne, "z", strlen("z"));
    TKAStringOutput(stringOne);
    
    printf (" %llu ", TKAStringGetLength(stringOne));
    printf("\n");
    
    TKAObjectRelease(stringOne);
    TKAStringRelease(stringOne);
}
    
//    TKAStringCopyData(stringOne, "testsecond", strlen("testsecond"));
//    TKAObjectRetain(stringOne);
//    TKAObjectRelease(stringOne);
//    TKAObjectRelease(stringOne);
//    TKAStringOutput(stringOne);
//    printf (" %llu ", TKAStringGetLength(stringOne));
//    printf("\n");
    
//    TKAString *stringTwo = TKAObjectCreate(TKAString);
//
//    TKAStringCopyData(stringOne, "testsecond", strlen("testsecond"));
//    TKAStringOutput(stringOne);
//    printf (" %llu ", TKAStringGetLength(stringOne));
//    printf("\n");
//    
//    TKAStringCopyData(stringOne, "", strlen(""));
//    TKAStringOutput(stringOne);
//    printf (" %llu ", TKAStringGetLength(stringOne));
//    printf("\n");
//    
//    TKAStringCopyData(stringOne, "z", strlen("z"));
//    TKAStringOutput(stringOne);
//    printf (" %llu ", TKAStringGetLength(stringOne));
//    printf("\n");
    
//    TKAStringKillTest(stringOne);


#pragma mark -
#pragma mark Public Implementations

//TKAString *TKAStringCreateTest(char *string) {
//    TKAString *stringTest = TKAStringCreate();
//    TKAStringCopyData(stringTest, string, strlen(string));
//    
//    return stringTest;
//}
//
//void TKAStringKillTest(TKAString *stringTest) {
//    TKAStringRelease(stringTest);
//}
//
void TKAStringTestMain() {
    
    TKAStringTest();
}