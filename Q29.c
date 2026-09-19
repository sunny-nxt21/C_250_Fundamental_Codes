// Write a C program to find the greater between two numbers.

#include<stdio.h>
int main()
{
    int number;
    int another_number;

    printf("The number is = ");
    scanf("%d", &number);

    printf("The another number is = ");
    scanf("%d", &another_number);

    if (number > another_number)
    {
        printf("this first number is Greater than second number. \n");
    } 
    else
    {
        printf("this second number is Greater than first number. \n");
    }
    printf("Thank_You_Sir");
    return 0;
}