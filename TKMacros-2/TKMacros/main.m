//
//  main.m
//  TKMacros
//
//  Created by Taisiya on 11.02.15.
//  Copyright (c) 2015 TKhomeWork. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "stdio.h"


#define TKaTypePr(TKaTypeValue) printf("%d type integer\n",TKaTypeValue);
#define TKaTypeGener(TkaType,TKaTypeSpecific,TkaTypeValue) printf();
//#define TKaOutput_type(TkaType,TkaTypeSpecific) void TkaOutput_##TkaType##(TKaType TkaTypeValue) {\
                        printf("%#TKaTypeSpecific type #TkaType \n",TkaTypeValue);\
                        return 0;}


#define TKaOutput_type(TkaTypeSpecific, TkaTypeValue)\
        void TkaOutput_int(int TkaTypeValue) {\
        printf("%"#TKaTypeSpecific" type int \n",TkaTypeValue);\
        return;}

#define TKaOutput_typeM(TkaTypeSpecific,TkaTypeValue) TkaOutput_int(TkaTypeValue)


TKaOutput_type(TKaTypeSpecific, TKaTypeValue);

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
        
        TKaOutput_typeM(d, TKaTypeValueInt);
        
//        void TkaOutput_int(int TkaTypeValueInt) {
//            printf("%#TKaTypeSpecific type int \n",TkaTypeValueInt);\
//            return 0;}

        //TKaTypePr(TKaTypeValueInt);
        //TKaTypeGener(TKaTypeSpecificInt,TKaTypeValueInt);
        //TKaOutput_type(i,TKaTypeValueInt);
        
        //printf("type  %d integer \n",TKaIntType);
        printf("%c type char \n",TKaTypeValueChar);
        printf("%f type float \n",TKaTypeValueFloat);
        
    }
    return 0;
}
