// Write a C program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int number;
    int function;

    printf("the number is = ", number);
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("This number is even %d", number);
    }

    else if(number % 2 == 1)
    {
        printf("This number is odd");
    }
    return 0;

}