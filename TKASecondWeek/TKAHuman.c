//
//  TKAHuman.c
//  TKASecondWeek
//
//  Created by Taisiya on 01.03.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAHuman.h"
//#include "TKAArray.h"
//
//#pragma mark -
//#pragma mark Private Declarations
//
//static
//void TKAHumanDealloc(TKAHuman *human);
//
//#pragma mark -
//#pragma mark Public Declarations
//
//#pragma mark -
//#pragma mark Privat Implementations
//
//void TKAHumanDealloc(TKAHuman *human) {
//    TKAHumanSetName(human, NULL);
//    TKAHumanSetChildren(human, NULL);
//    TKAHumanSetPartner(human, NULL);
//    TKAHumanSetMother(human, NULL);
//    TKAHumanSetFather(human, NULL);
//    
//    free(human);
//}
//
//#pragma mark -
//#pragma mark Public Implementations
//
//TKAHuman *TKAHumanCreate() {
//    TKAHuman *human = calloc(1, sizeof(*human));
//    human->_referenceCount = 1;
//    
//    return human;
//}
//
//void TKAHumanRetain(TKAHuman *human) {
//    human->_referenceCount++;
//}
//
//void TKAHumanRelease(TKAHuman *human) {
//    human->_referenceCount--;
//    
//    if (0 == human->_referenceCount){
//        TKAHumanDealloc(human);
//    }
//}
//
//void TKAHumanSetName(TKAHuman *human, TKAString *name) {
//    if (human->_name != name) {
//        
//        if (NULL != human->_name) {
//            TKAStringRelease(human->_name);
//        }
//        
//        human->_name = name;
//        
//        if (NULL != human->_name) {
//            TKAStringRetain(name);
//        }
//        
//    }
//}
//
//TKAString *TKAHumanGetName(TKAHuman *human) {
//    
//    return human->_name;
//}
//
//void TKAHumanSetAge(TKAHuman *human, uint8_t age) {
//    human->_age = age;
//}
//
//uint8_t TKAHumanGetAge(TKAHuman *human) {
//    
//    return human->_age;
//}
//
//void TKAHumanSetGender(TKAHuman *human, TKAGender gender) {
//    human->_gender = gender;
//}
//
//TKAGender TKAHumanGetGender(TKAHuman *human) {
//    
//    return human->_gender;
//}
//
//void TKAHumanSetCountChildren(TKAHuman *human, uint8_t count) {
//    human->_countChildren = count;
//}
//
//uint8_t TKAHumanGetCountChildren(TKAHuman *human) {
//    
//    return human->_countChildren;
//}
//
//TKAArray *TKAHumanGetChildren(TKAHuman *human) {
//    
//    return human->_children;
//}
//
//void TKAHumanSetChildren(TKAHuman *parent, TKAArray *children) {
//    if (parent->_children != children) {
//        
//        if (NULL != parent->_children) {
//            TKAArrayRelease(parent->_children);
//        }
//        
//        parent->_children = children;
//        
//        if (NULL != parent->_children) {
//            TKAArrayRetain(children);
//        }
//        
//    }
//}
//
//TKAHuman *TKAHumanGetPartner(TKAHuman *human) {
//    
//    return human->_partner;
//}
//
//void TKAHumanSetPartner(TKAHuman *partner1, TKAHuman *partner2) {
//    if (partner1->_partner != partner2) {
//        
//        if (NULL != partner1->_partner) {
//            TKAHumanRelease(partner1->_partner);
//        }
//        
//        partner1->_partner = partner2;
//        
//        if (NULL != partner1->_partner) {
//            TKAHumanRetain(partner2);
//        }
//        
//    }
//}
//
//TKAHuman *TKAHumanGetFather(TKAHuman *human) {
//    
//    return human->_father;
//}
//
//void TKAHumanSetFather(TKAHuman *child, TKAHuman *parent) {
//    if (child->_father != parent) {
//        
//        if (NULL != child->_father) {
//            TKAHumanRelease(child->_father);
//        }
//        
//        child->_father = parent;
//        
//        if (NULL != child->_father) {
//            TKAHumanRetain(parent);
//        }
//        
//    }
//}
//
//TKAHuman *TKAHumanGetMother(TKAHuman *human) {
//    
//    return human->_mother;
//}
//
//void TKAHumanSetMother(TKAHuman *child, TKAHuman *parent) {
//    if (child->_mother != parent) {
//        
//        if (NULL != child->_mother) {
//            TKAHumanRelease(child->_mother);
//        }
//        
//        child->_mother = parent;
//        
//        if (NULL != child->_mother) {
//            TKAHumanRetain(parent);
//        }
//        
//    }
//}
//
//void TKAHumanDivorcePartner(TKAHuman *human) {
//    if (NULL != TKAHumanGetPartner(human) && human != TKAHumanGetPartner(human)) {
//        
//        if (TKAHumanGetPartner(TKAHumanGetPartner(human)) == human) {
//            TKAHumanDivorce(human, TKAHumanGetPartner(human));
//        } else {
//            TKAHumanSetPartner(human, NULL);
//        }
//        
//    }
//}
//
//void TKAHumanDivorce(TKAHuman *partner1, TKAHuman *partner2) {
//    if (partner1 != partner2 && NULL != partner1 && NULL != partner2) {
//        
//        if (partner1 == TKAHumanGetPartner(partner2) && partner2 == TKAHumanGetPartner(partner1)) {
//            TKAHumanSetPartner(partner1, NULL);
//            TKAHumanSetPartner(partner2, NULL);
//        }
//        
//    }
//}
//
//void TKAHumanMarry(TKAHuman *partner1, TKAHuman *partner2) {
//    if (partner1 != partner2 && NULL != partner1 && NULL != partner2) {
//        
//        if (NULL != TKAHumanGetPartner(partner1)) {
//            TKAHumanDivorcePartner(partner1);
//        }
//        
//        if (NULL != TKAHumanGetPartner(partner2)) {
//            TKAHumanDivorcePartner(partner2);
//        }
//        
//        TKAHumanSetPartner(partner1, partner2);
//        TKAHumanSetPartner(partner2, partner1);
//    }
//}
//
//void TKAHumanAddChild(TKAHuman *parent, TKAHuman *child) {
//    if (child != parent) {
//        if (NULL != child) {
//            
//            if (NULL == TKAHumanGetChildren(parent)) {
//                TKAArray *arrayChild = TKAArrayCreate();
//                TKAHumanSetChildren(parent, arrayChild);
//            }
//            
//            if (NULL != TKAHumanGetChildren(parent)) {
//                TKAArrayAddChild(TKAHumanGetChildren(parent), child);
//            }
//            
//            //MAKE WITH BOOL RESAULT
//            parent->_countChildren++;
//        }
//    }
//}
//
//TKAHuman *TKAHumanBorn(TKAHuman *father, TKAHuman *mother, TKAGender gender) {
//    TKAHuman *newBorn = TKAHumanCreate();
//    
//    TKAHumanSetAge(newBorn, 0);
//    TKAHumanSetGender(newBorn, gender);
//    TKAHumanSetCountChildren(newBorn, 0);
//    
//    if (NULL != father) {
//        TKAHumanAddChild(father, newBorn);
//        TKAHumanSetFather(newBorn, father);
//    }
//    if (father !=mother && NULL != mother) {
//        TKAHumanAddChild(mother, newBorn);
//        TKAHumanSetMother(newBorn, mother);
//    }
//    
//    return newBorn;
//}
//
//
//
