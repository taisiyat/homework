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
    TKAString * stringOne = TKAStringCreateTest("z");

    TKAStringOutput(stringOne);
    printf (" %llu ", TKAStringGetLength(stringOne));
    printf("\n");
    
    TKAStringCopyData(stringOne, "testsecond", strlen("testsecond"));

    TKAStringOutput(stringOne);
    printf (" %llu ", TKAStringGetLength(stringOne));
    printf("\n");
    
    TKAObjectRelease(stringOne);
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
    


}
#pragma mark -
#pragma mark Public Implementations

TKAString *TKAStringCreateTest(char *string) {
    TKAString * stringTest = TKAObjectCreate(TKAString);
    TKAStringCopyData(stringTest, string, strlen(string));
    
    return stringTest;
}

void TKAStringTestMain() {
    
    TKAStringTest();
}