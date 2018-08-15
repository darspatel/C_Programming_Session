/*********************************************
Name: Darshan Patel
Date: August 14th, 2018
Topics: changing some bits in 8 bit input
**********************************************/

/*
Bit 0: Unchanged
Bit 1: Unchanged
Bit 2: Set this bit
Bit 3: Unchanged
Bit 4: Unchanged
Bit 5: Reset this bit
Bit 6: Unchanged
Bit 7: Toggle this bit
*/

#include <stdio.h>

int change_bit_2_5_7(int input)
{
    input = input | 1 << 2;
    input = input & ~(1 << 5);
    input = input ^ 1 << 7;

    return input;
}

int main()
{
    int input_8_bit;
    printf("%d\n", change_bit_2_5_7(25));


}

