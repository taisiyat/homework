//
//  TKAHumanStructTest.c
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAHumanStructTest.h"
#include "TKAHumanStruct.h"

#pragma mark -
#pragma mark Private Declarations

static
void TKAStringStructTest();

static
void TKAHumanStructTest();

static
void TKAStringStructOutput(TKAStringStruct *string);

static
void TKAHumanStructOutput(TKAHumanStruct *human);


#pragma mark -
#pragma mark Public Declarations

#pragma mark -
#pragma mark Privat Implementations

void TKAStringStructOutput(TKAStringStruct *string) {
    printf(" %s ", TKAStringStructGetData(string));
}

void TKAHumanStructOutput(TKAHumanStruct *human) {
    TKAStringStructOutput(human->_name);
    printf("age = %d,",human->_age);
    printf("gender = %d", human->_gender);
    printf("count children = %d", human->_countChild);
    printf("maried = %c", human->_married);
    printf("partner = ");
    TKAStringStructOutput(TKAHumanStructGetPartner(human)->_name);
    printf("mather = ");
    TKAStringStructOutput(TKAHumanStructGetMother(human)->_name);
    printf("father = ");
    TKAStringStructOutput(TKAHumanStructGetFather(human)->_name);
 }

void TKAHumanStructInput(TKAHumanStruct *human, char *name, uint8_t age, TKAGender gender) {
    TKAHumanStructSetName(human, name);
    TKAHumanStructSetAge(human, age);
    TKAHumanStructSetGender(human, gender);
    }

void TKAStringStructTest() {
    TKAStringStruct *stringTest = TKAStringStructCreate();
    char *strHelp = "abvg";
    TKAStringStructSetLength(stringTest, sizeof(strHelp)+1);
    TKAStringStructSetData(stringTest, strHelp);
    printf (" %s  %llu",TKAStringStructGetData(stringTest) ,TKAStringStructGetLength(stringTest));
    TKAStringStructSetLength(stringTest, sizeof("dhdshd")+1);
    TKAStringStructSetData(stringTest, "dhdshd");
    printf (" %s  %llu",TKAStringStructGetData(stringTest) ,TKAStringStructGetLength(stringTest));
    TKAStringStructRelease(stringTest);
}

void TKAHumanStructTest() {
    TKAHumanStruct *god = TKAHumanStructCreate();
    TKAHumanStruct *adam = TKAHumanStructCreate();
    TKAHumanStruct *eve = TKAHumanStructCreate();
    
    TKAHumanStructInput(god, "God", 100, TKAMale);
    TKAHumanStructInput(adam, "Adam", 30, TKAMale);
    TKAHumanStructInput(eve, "Eve", 25, TKAFemale);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    
    TKAHumanStructMarry(adam, eve);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    
    TKAHumanStructDivorce(adam, eve);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    
    TKAHumanStruct *son = TKAHumanStructBorn(adam, eve, TKAMale);
    TKAHumanStructOutput(god);
    
    TKAHumanStructDie(son);
    TKAHumanStructDie(god);
    TKAHumanStructDie(adam);
    TKAHumanStructDie(eve);
    }


#pragma mark -
#pragma mark Public Implementations

void TKAHumanStructTestMain(){
   // TKAStringStructTest();
   // TKAHumanStructTest();
}