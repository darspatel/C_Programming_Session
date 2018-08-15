/*********************************************
Name: Darshan Patel
Date: August 14th, 2018
Topics: Promotion Decision
**********************************************/

#include <stdio.h>
#include <time.h>

typedef struct Employee{
    char name[20];
    int month;
    int date;
    int year;
    char assess_rank_c1[10];
    char assess_rank_c2[10];
    char assess_rank_c3[10];
    char certifications[3];
    int credit_point;
}Emp;

int main()
{
    Emp emp1 = {"XYZ", 1, 1, 2018, "excellent", "poor", "poor", "yes", 41};
    if(emp1.assess_rank_c1 != "excellent" && emp1.assess_rank_c2 != "excellent" && emp1.assess_rank_c3 != "excellent")
    {
        printf("Employee is not eligible for Promotion due to not meeting assessment rank requirement.\n");
    }
    else
    {
            if(emp1.credit_point < 40 && emp1.certifications != "yes")
            {
                printf("Employee is not eligible for Promotion due to not meeting credits or certification.");
            }
            else
            {
                printf("Employee is eligible for Promotion.");
            }
    }
}
