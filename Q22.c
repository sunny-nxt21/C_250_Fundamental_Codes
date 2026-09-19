// Write a C program to convert days into years, months and days.

#include<stdio.h>
#include<math.h>

int main()
{
    float days;
    float years;
    float months;
    float remaining_days;
    
    printf("days = ");
    scanf("%d", &days);

    years = days / 365;
    months = fmod(days / 30);
    remaining_days = fmod(months / 30);

    printf("years = %f", years);
    printf("months = %d", months);
    printf("remaining_days = %d", remaining_days);
    
    return 0;
}