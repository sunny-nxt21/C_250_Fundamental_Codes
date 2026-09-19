// Write a C program to calculate gross salary.
#include<stdio.h>
int main()
{
    int daily_income;
    int monthly_salary;

    printf("daily_income = ", daily_income);
    scanf("%d", &daily_income);

    monthly_salary = (daily_income * 30);
    printf("Finally, Gross salary = %d", monthly_salary);
    return 0;
}