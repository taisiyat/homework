//
//  main.m
//  TKMacros
//
//  Created by Taisiya on 11.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "TKOut.h"

#define TKaTypePr(TKaTypeValue) printf("%d type integer\n",TKaTypeValue)
#define TKaTypeGener(TkaType,TKaTypeSpecific,TkaTypeValue) printf()
#define TKaOutput_type(TkaTypeOut,TkaTypeValue) TkaOutput_##TkaTypeOut##(TkaTypeValue)



int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        // insert code here...
        NSLog(@"Hello, World!");
        
        int TKaTypeValueInt;
        float TKaTypeValueFloat;
        char TKaTypeValueChar;
        char TKaTypeSpecificInt;
        
        TKaTypeValueInt = 5;
        TKaTypeValueFloat = 13.55;
        TKaTypeValueChar = 'g';
        TKaTypeSpecificInt = 'd';
     
        TKaTypePr(TKaTypeValueInt);
        //TKaTypeGener(TKaTypeSpecificInt,TKaTypeValueInt);
        //TKaOutput_type(i,TKaTypeValueInt);
        
        //printf("type  %d integer \n",TKaIntType);
        printf("%c type char \n",TKaTypeValueChar);
        printf("%f type float \n",TKaTypeValueFloat);
        
    }
    return 0;
}
