// Write a C program to display the number of days in a month using switch-case.

#include<stdio.h>
int main()
{
    int month;
    printf("month : ");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
        printf("January = 31");
        break;
        case 2:
        printf("february = 28");
        break;
        case 3:
        printf("March = 31");
        break;
        case 4:
        printf("April = 30");
        break;
        case 5:
        printf("May = 31");
        break;
        case 6:
        printf("June = 30");
        break;
        case 7:
        printf("July = 31");
        break;
        case 8:
        printf("August = 31");
        break;
        case 9:
        printf("September = 30");
        break;
        case 10:
        printf("October = 31");
        break;
        case 11:
        printf("November = 30");
        break;
        case 12:
        printf("December = 31");
        break;

        default:
        printf("This digit is invalid");
    }
    return 0;

}