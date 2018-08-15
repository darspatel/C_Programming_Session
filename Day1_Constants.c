/*****************************************
Name: Darshan Patel
Date: August 13th, 2018
Program: Constants Demo
*****************************************/

#include <stdio.h>

int main (void)
{
    int var1 = 212;
    int var2 = 215u;
    int var3 = 0xFeeL;
 //   int var4 = 078;         //Invalid ( 8 is not in octal range) (0 in beginning means its Octal Number
 //   int var5 = 032UU;       //Invalid  (two U)
    float var6 = 314159-5L;
//    float var7 = 510E;      //E meaning exponent, So needs something after E
//    float var8 = 210F;      //
//    float var9 = .e55;      //needs some number before .

    int var10 = sizeof(int);
    printf("Int Size: %d\n", var10);
    int var11 = sizeof(float);
    printf("Float Size: %d\n", var11);
    int var12 = sizeof(double);
    printf("Double Size: %d\n", var12);
    int var13 = sizeof(char);
    printf("Char Size: %d\n", var13);

    int var14 = printf("Darshan\n");
    printf("Size of Printf \"Darshan\\n\": %d\n", var14);

    int var15 = sizeof(void);
    printf("Size of void: %d\n", var15);



    return 0;
}
