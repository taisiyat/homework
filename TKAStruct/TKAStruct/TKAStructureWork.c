//
//  TKAStructureWork.c
//  TKAStruct
//
//  Created by Taisiya on 12.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

#include "TKAStructureWork.h"
#include "TKAStructBuild.h"

#pragma mark -
#pragma mark Private Definitions

static
void TKAStructureSizeTest();

static
void TKAStructurePlaceTest();

#pragma mark -
#pragma mark Private Definitions


void TKAStructureMainTest() {
    TKAStructurePlaceTest();// place elements structure
    TKAStructureSizeTest();// size structure
    }

#pragma mark -
#pragma mark Private Definitions

void TKAStructureSizeTest() {
    TKAStructure structure;
    
    //    assert(0 != sizeof(structure));
    printf(" structure size = %lu \n", sizeof(structure));
}

#define TKAStructureOffsetOutput(type, property, value, desiredOffset) \
    do { \
    size_t offset = offsetof(type, property); \
    ptrdiff_t offsetTrick = (void *)&value->property - (void *)value; \
    assert(desiredOffset == offset); \
    assert(offset == offsetTrick); \
    printf("offset of "#property" = %lu\n", offset);\
    } while(0);

void TKAStructurePlaceTest() {
    TKAStructure stackStructure = {0,0,0,0,0,0,0};
    TKAStructure *structure = &stackStructure;
    
  TKAStructureOffsetOutput(TKAStructure, boolValue, structure, 0);
  TKAStructureOffsetOutput(TKAStructure, floatValue, structure, 4);
    
    
}

#undef IDPStructureOffsetOutput







