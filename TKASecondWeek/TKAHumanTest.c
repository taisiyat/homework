//
//  TKAHumanTest.c
//  TKASecondWeek
//
//  Created by Taisiya on 01.03.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAHumanTest.h"

//#pragma mark -
//#pragma mark Private Declarations
//
//static
//void TKAHumanKillTest(TKAHuman *human);
//
//static
//void TKAHumanTest();
//
//static
//void TKAHumanOutput(TKAHuman *human);
//
//#pragma mark -
//#pragma mark Public Declarations
//
//#pragma mark -
//#pragma mark Privat Implementations
//
//void TKAHumanOutput(TKAHuman *human) {
//    
//    TKAStringOutput(TKAHumanGetName(human));
//    printf(" ");
//    printf("age = %d, ",TKAHumanGetAge(human));
//    printf("gender = %d, ", TKAHumanGetGender(human));
//    printf("count children = %d, ", TKAHumanGetCountChildren(human));
//    
//    if (NULL != TKAHumanGetPartner(human)) {
//        printf("partner = ");
//        TKAStringOutput(TKAHumanGetName(TKAHumanGetPartner(human)));
//        printf(", ");
//    }
//    
//    if (NULL != TKAHumanGetFather(human)) {
//        printf("father = ");
//        TKAStringOutput(TKAHumanGetName(TKAHumanGetFather(human)));
//        printf(", ");
//    }
//    
//    if (NULL != TKAHumanGetMother(human)) {
//        printf("motner = ");
//        TKAStringOutput(TKAHumanGetName(TKAHumanGetMother(human)));
//        printf(", ");
//    }
//    
//    if (NULL != TKAHumanGetChildren(human)) {
//        printf("children: ");
//        TKAArrayOutput(TKAHumanGetChildren(human));
//    }
//    
//    printf(" \n");
//}
//
//TKAHuman *TKAHumanCreateTest(TKAString *name, uint8_t age, TKAGender gender) {
//    
//    TKAHuman *human = TKAHumanCreate();
//    
//    TKAHumanSetName(human, name);
//    TKAHumanSetAge(human, age);
//    TKAHumanSetGender(human, gender);
//    
//    return human;
//}
//
//void TKAHumanKillTest(TKAHuman *human) {
//    TKAHumanRelease(human);
//}
//
//void TKAHumanTest() {
//    
//    TKAString *stringGod = TKAStringCreateTest("God");
//    TKAString *stringAdam = TKAStringCreateTest("Adam");
//    TKAString *stringEve = TKAStringCreateTest("Eve");
//    TKAString *stringSon1 = TKAStringCreateTest("Son1");
//    TKAString *stringSon2 = TKAStringCreateTest("Son2");
//    
//    TKAHuman *god = TKAHumanCreateTest(stringGod, 100, TKAMale);
//    TKAHuman *adam = TKAHumanCreateTest(stringAdam, 30, TKAMale);
//    TKAHuman *eve = TKAHumanCreateTest(stringEve, 25, TKAFemale);
//    
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    TKAHumanMarry(adam, eve);
//    
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    TKAHumanDivorcePartner(eve);
//    
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    TKAHumanMarry(god, eve);
//    
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    //    TKAHumanDivorce(adam, eve);
//    //
//    //    TKAHumanOutput(god);
//    //    TKAHumanOutput(adam);
//    //    TKAHumanOutput(eve);
//    //    printf(" \n");
//    
//    TKAHumanDivorce(god, eve);
//    
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    TKAHuman *son1 = TKAHumanBorn(adam, eve, TKAMale);
//    TKAHumanSetName(son1, stringSon1);
//    
//    TKAHumanOutput(son1);
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    printf(" \n");
//    
//    TKAHuman *son2 = TKAHumanBorn(god, eve, TKAMale);
//    TKAHumanSetName(son2, stringSon2);
//    
//    TKAHumanOutput(son1);
//    TKAHumanOutput(son2);
//    TKAHumanOutput(god);
//    TKAHumanOutput(adam);
//    TKAHumanOutput(eve);
//    
//    TKAHumanKillTest(son1);
//    TKAHumanKillTest(son2);
//    TKAHumanKillTest(god);
//    TKAHumanKillTest(adam);
//    TKAHumanKillTest(eve);
//    
//    TKAStringKillTest(stringSon1);
//    TKAStringKillTest(stringSon2);
//    TKAStringKillTest(stringGod);
//    TKAStringKillTest(stringAdam);
//    TKAStringKillTest(stringEve);
//}
//
//#pragma mark -
//#pragma mark Public Implementations
//
//void TKAHumanTestMain(){
//    
//    TKAHumanTest();
//}
