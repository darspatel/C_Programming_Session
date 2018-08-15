/*********************************************
Name: Darshan Patel
Date: August 14th, 2018
Topics: Macros, Union, Structures
**********************************************/


#include <stdio.h>
#include <string.h>

#define MAX(X,Y) ((X>Y) ?X:Y)
#define MIN(X,Y) ((X<Y) ?X:Y)

typedef struct struct_example
{
    int integer;
    float decimal;
    char name[20];
}Str;

typedef union union_example
{
    int integer;
    float decimal;
    char name[16];
}Uni;

int main (){

//Macros
printf("MACROS:\n");
/*
#define MAX(X,Y) ((X>Y) ?X:Y)
#define MIN(X,Y) ((X<Y) ?X:Y)
*/
    int var1;
    var1 = MAX(2,5);
    printf("\tVar1 (MAX(2,5)): %d\n", var1);

    int var2 = 2;
    int var3 = 5;
    var1 = MAX(var2, var3);
    printf("\tVar1 (MAX(2,7)): %d\n", var1);

    var1 = MIN(2,5);
    printf("\tVar1 (MIN(2,5)): %d\n", var1);
    var1 = MIN(var2, var3);
    printf("\tVar1 (MIN(2,7)): %d\n", var1);

/*Unions and Structures*/

/* Difference 1: As oppose to Structures you can not update all members at once.*/
    Str s = {18,38,"Darshan"};
    Uni u = {18,38,"Darshan"};

    printf("Structure:\n\tinteger: %d\n\tdecimal: %.2f\n\tname: %s\n",
                                        s.integer, s.decimal, s.name);
    printf("\nUnion:\n\tinteger: %d\n\tdecimal: %.2f\n\tname: %s\n",
                                        u.integer, u.decimal, u.name);

/*Difference 2: Sizes are different*/
    printf("\nSize of structure : %d\n", sizeof(s));
    printf("Size of union : %d\n", sizeof(u));

/*Difference 3: Only last updated member will have valid value in Union as oppose to Structures*/
    printf("\nAccessing all members at a time:\n");
    s.integer = 183;
    s.decimal = 90;
    strcpy(s.name, "Darshan");

    u.integer = 183;
    u.decimal = 90;
    strcpy(u.name, "Darshan");

    printf("Structure:\n\tinteger: %d\n\tdecimal: %.2f\n\tname: %s\n",
                                        s.integer, s.decimal, s.name);
    printf("\nUnion:\n\tinteger: %d\n\tdecimal: %.2f\n\tname: %s\n",
                                        u.integer, u.decimal, u.name);


    return 0;
}
