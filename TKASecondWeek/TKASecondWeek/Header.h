//
//  Header.h
//  TKASecondWeek
//
//  Created by Taisiya on 17.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#ifndef TKASecondWeek_Header_h
#define TKASecondWeek_Header_h

typedef struct TKAPerson TKAPerson;

typedef enum {
    TKAMale,
    TKAFemale
} TKASexPerson;

typedef struct {
    char TKAFirstName[100];
    char TKALastName[100];
} TKANamePerson;

typedef union {
    enum {
        TKASingle,
        TKAMarried
    }TKAMarriage;
    TKAPerson *TKAPartner;
}TKAMarriagePerson;

typedef struct {
    TKAPerson *TKAFather;
    TKAPerson *TKAMother;
} TKAParentsPerson;

//typedef enum {
//    TKAlive,
//    TKAdead
//} TKALivePerson;

typedef struct {
    unsigned char TKAYears;
    enum {
        TKAlive,
        TKAdead
    } TKALivePerson;
}TKAAgePerson;

struct TKAPerson {
    TKANamePerson _name;
    TKASexPerson _sex;
    TKAPerson *_child[20];
    TKAMarriagePerson _marriagePerson;
    TKAParentsPerson _parent;
    TKAAgePerson _age;
    uint64_t _referenceCount;
};
typedef struct TKAPerson TKAPerson;


#endif
