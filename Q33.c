// Write a C program to check whether a year is a leap year.

#include<stdio.h>
int main()
{
    int year;
    printf("type the name of year = ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("This year is Leap Year");
    }
    else
    {
        printf("This year is not Leap Year");
    }
    return 0;
}