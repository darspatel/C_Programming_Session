#include <stdio.h>
//#include <math.h>
#include <stdlib.h>

typedef int* intptr1;
#define INTPTR2 int*

typedef char arr[10];
#define ARR10 char arr[10]

int main(void)
{
    /*
    int i = 0;
    printf("Example of i++: \n ");
    for(i = 0; i < 10; i++)
    {
        printf("%d  ", i);
    }

    printf("\nExample of i--: \n  ");
    for(i = 10; i > 0; i--)
    {
        printf("%d  ", i);
    }

printf("\nExample of i += 2: \n  ");  // i = i +2
    i = 0;
    while(i < 10)
    {
        printf("%d  ", i);
        i += 2;
    }

    int rand_Num;
    int user_Num;
    rand_Num = rand() % 10 + 1;

    printf("(%d) \n", rand_Num);

    while(1)
    {
        printf("Guess a Number from 1 to 10: ");
        scanf("%d", &user_Num);
        if(user_Num > rand_Num)
        {
            printf("Guess is High, guess lower number.\n");
        }
        else if(user_Num < rand_Num)
        {
            printf("Guess is Low, guess higher number.\n");
        }
        else if(user_Num == rand_Num))
        {
            printf("Great, That's a match");
            break;
        }
    }

    */

////////////////////////////////////
/*
    int user_input = 1;

    printf("Example of While: \n");
    while(user_input != 0)
    {
        printf("Please enter any number (0 to exit): ");
        scanf("%d", &user_input);
        printf("%d \n", user_input);
    }

    printf("\n");
    printf("Example of Do While: \n");

    int user_input1 = 0;
    do
    {
        printf("Please enter any number (0 to exit and 1 to continue): ");
        scanf("%d", &user_input1);
        if(user_input1 == 0)
        {
            return 0;
        }
        else if(user_input1 == 1)
        {
            continue;
        }
        printf("    Line After Continue\n");
    }while(1);
*/


int a = 7;
int b = 5;
int x = 3;
int y = 2;

intptr1 pa;
intptr1 pb;
INTPTR2 px, py;     // warning: py will be an int and not int *

pa = &a;
pb = &b;
px = &x;
py = &y;

printf("%d %d %d", sizeof(pa), sizeof(px), sizeof(py));

//printf("%d %d %d %d", *pa, *pb, *px, *py);



return 0;
}
