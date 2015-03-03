//
//  TKAOutputMamaPapa.c
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAMamaPapaOutput.h"

TKAMamaPapaResult TKAMamaPapaOutput(int value) {
    TKAMamaPapaResult resultMamaPapa = TKANone;
    printf(" %d ", value);
    
    if (0 != value) {
        if(0 == value%3) {
            printf("mama");
            resultMamaPapa = resultMamaPapa+TKAMama;
        }
        
        if(0 == value%5) {
            printf("papa");
            resultMamaPapa = resultMamaPapa+TKAPapa;
        }
    }
    
    printf("\n");
    
    return resultMamaPapa;
}

void TKAMamaPapaOutputMain() {
    int numberMin = 1;
    int numberMax = 100;
  
    for (int number = numberMin; number <= numberMax; number++) {
        TKAMamaPapaOutput(number);
    }
    
}






