// Write a C program to check whether a number is divisible by 5.

#include<stdio.h>
int main()
{
    int number;

    printf("enter your desireable number = ", number);
    scanf("%d", &number);

    if (number % 5 == 0)
    {
        printf("This number is divided by five \n");
    }
    else 
    {
        printf("This number is not divided by five \n");
    }

    printf("Thank_You_Buddy");
    return 0;
}