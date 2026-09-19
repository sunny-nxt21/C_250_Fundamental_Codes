// Write a C program to find the smaller between two numbers.

#include<stdio.h>
int main ()
{
    int first_number;
    int second_number;

    printf("put the first number = ");
    scanf("%d", &first_number);

    printf("put the second number = ");
    scanf("%d", &second_number);

    if (first_number < second_number)
    {
        printf("The First Number is smollar than Second Number\n");
    }
    else if (first_number == second_number)
    {
        printf("The both number is equal \n");
    }   
    else
    {
        printf("The Second Number is smollar than First Number\n");
    }

    printf("Thank_You_Sunny\n");
    return 0;
}