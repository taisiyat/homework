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
    TKAStringStructOutput(TKAHumanStructGetName(human));
    printf("age = %d  ,",TKAHumanStructGetAge(human));
    printf("gender = %d  ", TKAHumanStructGetGender(human));
    printf("count children = %d  ", TKAHumanStructGetCountChildren(human));
    if (NULL != TKAHumanStructGetPartner(human)) {
        printf("partner =  ");
        TKAStringStructOutput(TKAHumanStructGetName(TKAHumanStructGetPartner(human)));
    }
    if (NULL != TKAHumanStructGetFather(human)) {
        printf("father =  ");
        TKAStringStructOutput(TKAHumanStructGetName(TKAHumanStructGetFather(human)));
    }
    if (NULL != TKAHumanStructGetMother(human)) {
        printf("motner =  ");
        TKAStringStructOutput(TKAHumanStructGetName(TKAHumanStructGetMother(human)));
    }
       printf(" \n");
 }

void TKAHumanStructInput(TKAHumanStruct *human, TKAStringStruct *name, uint8_t age, TKAGender gender) {
    TKAHumanStructSetName(human, name);
    TKAHumanStructSetAge(human, age);
    TKAHumanStructSetGender(human, gender);
    }

void TKAStringStructTest() {
    TKAStringStruct *stringTest = TKAStringStructCreate();
   
    char *str1="fgfgh";
    TKAStringStructSetLenght(stringTest, strlen(str1));
    TKAStringStructCopyData(stringTest, str1, strlen(str1));
    printf (" %s  %llu",TKAStringStructGetData(stringTest) ,TKAStringStructGetLenght(stringTest));
    char *str2="fgvnxfgh";
    TKAStringStructSetLenght(stringTest, strlen(str2));
    TKAStringStructCopyData(stringTest, str2, strlen(str2));
    printf (" %s  %llu",TKAStringStructGetData(stringTest) ,TKAStringStructGetLenght(stringTest));
    TKAStringStructRelease(stringTest);
}

void TKAHumanStructTest() {
    TKAHumanStruct *god = TKAHumanStructCreate();
    TKAHumanStruct *adam = TKAHumanStructCreate();
    TKAHumanStruct *eve = TKAHumanStructCreate();
    
    TKAStringStruct *stringGod = TKAStringStructCreate();
    char *nameg="God";
    TKAStringStructSetLenght(stringGod, strlen(nameg));
    TKAStringStructCopyData(stringGod, nameg, strlen(nameg));
    
    TKAStringStruct *stringAdam = TKAStringStructCreate();
    char *namea="Adam";
    TKAStringStructSetLenght(stringAdam, strlen(namea));
    TKAStringStructCopyData(stringAdam, namea, strlen(namea));
    
    TKAStringStruct *stringEve = TKAStringStructCreate();
    char *namee="Eve";
    TKAStringStructSetLenght(stringEve, strlen(namee));
    TKAStringStructCopyData(stringEve, namee, strlen(namee));
    
    TKAHumanStructInput(god, stringGod, 100, TKAMale);
    TKAHumanStructInput(adam, stringAdam, 30, TKAMale);
    TKAHumanStructInput(eve, stringEve, 25, TKAFemale);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    printf(" \n");
    TKAHumanStructMarry(adam, eve);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    printf(" \n");
//    TKAHumanStructDivorcePartner(eve);
//    TKAHumanStructOutput(god);
//    TKAHumanStructOutput(adam);
//    TKAHumanStructOutput(eve);
//    printf(" \n");
//    TKAHumanStructMarry(god, eve);
//    TKAHumanStructOutput(god);
//    TKAHumanStructOutput(adam);
//    TKAHumanStructOutput(eve);
//    printf(" \n");

    TKAHumanStructDivorce(adam, eve);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    printf(" \n");
//    TKAHumanStructDivorce(god, eve);
//    TKAHumanStructOutput(god);
//    TKAHumanStructOutput(adam);
//    TKAHumanStructOutput(eve);
//    
//    
    char *names = "Son";
    
//    TKAHumanStruct *son = TKAHumanStructCreate();
//    TKAHumanStructBorn1(son, adam, eve, TKAMale);
    
    TKAHumanStruct *son = TKAHumanStructBorn(adam, eve, TKAMale);
    
    TKAStringStruct *stringSon = TKAStringStructCreate();
    TKAStringStructSetLenght(stringSon, strlen(names));
    TKAStringStructCopyData(stringSon, names, strlen(names));
    TKAHumanStructSetName(son, stringSon);
    TKAHumanStructOutput(son);
    TKAHumanStructOutput(god);
    TKAHumanStructOutput(adam);
    TKAHumanStructOutput(eve);
    
    TKAHumanStructDie(son);
    TKAHumanStructDie(god);
    TKAHumanStructDie(adam);
    TKAHumanStructDie(eve);
    
    TKAStringStructRelease(stringSon);
    TKAStringStructRelease(stringGod);
    TKAStringStructRelease(stringAdam);
    TKAStringStructRelease(stringEve);
   
}

void TKAArrayStructTest() {
    
    
}


#pragma mark -
#pragma mark Public Implementations

void TKAHumanStructTestMain(){
//    char *strHelp = "abbhjhtyutrytyuytytyty7686hfghfvghvhgvhgvhgvhgvhgvhgjjvg";
//    printf(" %lu ", sizeof(*strHelp));
//    printf(" %lu ", strlen(strHelp));
//    printf(" %s ", strHelp);
//    TKAStringStructTest();
  
     TKAHumanStructTest();
    TKAArrayStructTest();
}