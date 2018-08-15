/*********************************************
Name: Darshan Patel
Date: August 14th, 2018
Topics: Constant Pointers, Pointers to Constant, Constant Pointers to Constants,
        Bit Fields
**********************************************/

#include <stdio.h>

struct Car{
    unsigned int speed:4;
    unsigned int model:20;
};

int main()
{
    int var1 = 0;
    int var2 = 0;

    int *const ptr = &var1;         //constant pointer
    printf("%d\n", *ptr);
    //ptr = &var2;      //error
    *ptr = 12;
    printf("%d\n", *ptr);

    int var3 = 5;
    int var4 = 9;
    const int* ptr1 = &var3;        // pointers to constant
    //*ptr1 = 1;          //error
    ptr1 = &var4;

    int var5 = 5;
    int var6 = 9;
    const int* const ptr2 = &var5;        // constant pointers to constant
    //*ptr2 = 1;          //error
    //ptr2 = &var6;       //error

    int var7 = 5;
    int var8 = 9;
    int const* ptr3 = &var7;        // pointers to constant
    //*ptr3 = 1;          //error
    ptr3 = &var8;       //error

/*Bit fields*/
    struct Car C = {15};
    struct Car *ptr9 = &C;
    printf("Speed: %d\n", ptr9->speed);
    ptr9->model = 800;
    printf("Model: %d\n", ptr9->model);


    return 0;
}
