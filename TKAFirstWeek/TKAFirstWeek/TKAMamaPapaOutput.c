//
//  TKAOutputMamaPapa.c
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAMamaPapaOutput.h"

TKAFlagMP TKAMamaPapaOutputCompare(int numberValue) {
    int flagMamaPapa = 0;
    printf(" %d ", numberValue);
    
    if (0 != numberValue) {
        if(0 == numberValue%3){
            printf("mama");
            flagMamaPapa = 1;
        }
        if(0 == numberValue%5) {
            printf("papa");
            flagMamaPapa = 2;
        }
        if(0 == numberValue%3 && 0 == numberValue%5) flagMamaPapa=3;
    }
    
    printf("\n");
    return flagMamaPapa;
}

void TKAMamaPapaOutputMain() {
    const int numberMin = 1;
    const int numberMax = 100;
  
    for (int numberIncrement = numberMin; numberIncrement <= numberMax; numberIncrement++) {
        TKAMamaPapaOutputCompare(numberIncrement);
    }
}






