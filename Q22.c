// Write a C program to convert days into years, months and days.

#include <stdio.h>

int main()
{
    int days;
    int years;
    int months;
    int remaining_days;

    printf("days = ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;

    months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf("years = %d\n", years);
    printf("months = %d\n", months);
    printf("remaining_days = %d", remaining_days);

    return 0;
}