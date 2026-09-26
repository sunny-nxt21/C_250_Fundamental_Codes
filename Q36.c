// Write a C program to find the smallest among three numbers.

#include<stdio.h>
int main()
{
    int number_1;
    int number_2;
    int number_3;

    printf("Type you numebr_1 = ");
    scanf("%d", &number_1);

    printf("Type you numebr_2 = ");
    scanf("%d", &number_2);

    printf("Type you numebr_3 = ");
    scanf("%d", &number_3);

    if((number_1 < number_2) && (number_1 < number_3))
    {
        printf("This number 1 is the smallest one= %d", number_1);
    }
    else if((number_2 < number_1) && (number_2 < number_3))
    {
        printf("This number 2 is the smallest one = %d", number_2);
    }
    else
    {
        printf("This number 3 is the smallest one = %d", number_3);
    }
    return 0;

}