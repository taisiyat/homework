//
//  TKAMamaPapaTest.c
//  TKAFirstWeek
//
//  Created by Taisiya on 13.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#include "TKAMamaPapaTest.h"
#include "TKAMamaPapaOutput.h"

void TKAMamaPapaTestMain() {
    int numberNull = 0;
    int numberThree = 6;
    int numberFive = 10;
    int numberThreeFive = 30;
    
    assert(TKANone == TKAMamaPapaOutput(numberNull));
    assert(TKAMama == TKAMamaPapaOutput(numberThree));
    assert(TKAPapa == TKAMamaPapaOutput(numberFive));
    assert(TKAMamaPapa == TKAMamaPapaOutput(numberThreeFive));
}
