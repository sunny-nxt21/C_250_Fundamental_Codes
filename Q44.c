// Write a C program to display the day of the week using switch-case.

#include<stdio.h>
int main()
{
    int days;
    printf("sat=1, sun=2, mon= 3, tue=4, wed=5, thurs= 6, fri=7 = ");
    scanf("%d", &days);

    switch (days)
    {
        case 1:
        printf("This is Saturday");
        break;

        case 2:
        printf("This is Sunday");
        break;

        case 3:
        printf("This is Monday");
        break;

        case 4:
        printf("This is Tuesday");
        break;

        case 5:
        printf("This is Wednesday");
        break;

        case 6:
        printf("This is Thursday");
        break;

        case 7:
        printf("This is Friday");
        break;

        default:
        printf("This digit is not refer any days");
    }
    return 0;
    
}