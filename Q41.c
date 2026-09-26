// Write a C program to calculate income tax based on salary.

#include<stdio.h>
int main()
{
    int salary;

    printf("My salary = ");
    scanf("%d", &salary);

    if(salary <= 25000)
    {
        int tax;
        tax = salary * 5 / 100;
        printf("My Salary tax = %d", tax);
    }
    else if (salary > 25000 && salary <= 40000)
    {
        int tax;
        tax = salary * 8 / 100;
        printf("My Salary tax = %d", tax);
    }
    else if (salary > 40000 && salary <= 75000)
    {
        int tax;
        tax = salary * 12 / 100;
        printf("My salary tax = %d", tax);
    }
    else if (salary > 75000 && salary <= 100000)
    {
        int tax;
        tax = salary * 15 / 100;
        printf("My salary Tax = %d", tax);
    }
    else
    {
        printf("Limit Cross not Tax");
    }
    return 0;

}