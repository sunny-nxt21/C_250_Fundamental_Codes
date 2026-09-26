// Write a C program to create a simple calculator using switch-case.

#include<stdio.h>
int main()
{
    int Number_1;
    int Number_2;

    printf("enter N1 = ");
    scanf("%d", &Number_1);

    char operator;
    printf("operator (+ - * /) = ");
    scanf(" %c", &operator);

    printf("enter N2 = ");
    scanf("%d", &Number_2);

    switch (operator)
    {
        case '+':
            printf("Result = %d", Number_1 + Number_2);
            break;

        case '-':
            printf("Result = %d", Number_1 - Number_2);
            break;
            
        case '*':
            printf("Result = %d", Number_1 * Number_2);
            break;
            
        case '/':
            printf("Result = %d", Number_1 / Number_2);
            break;
        
        default:
            printf("Invalid Operator");

    }
    return 0;
}