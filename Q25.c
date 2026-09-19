// Write a C program to check whether a number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number = ", number);
    scanf("%d", &number);

    if (number < 0)
    {
        printf("This number is Negative \n");
    }
    else if (number > 0)
    {
        printf("This number is Positive \n");
    }
    else 
    {
        printf("This number is not zero \n");
    }

    printf("Thank You");
    return 0;
}