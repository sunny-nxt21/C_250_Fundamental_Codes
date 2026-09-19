// Write a C program to check whether a number is divisible by both 3 and 5.

#include<stdio.h>
int main ()
{
    int number;

    printf("enter your number = ");
    scanf("%d", &number);

    
    if ((number % 3 == 0) && (number % 5 == 0))
    {
        printf("This number is divisible by both 3 and 5. \n");
    }
    else if (number % 3 == 0)
    {
        printf("This numbe is divisible by 3 not 5. \n");
    }
    else if (number % 5 == 0)
    {
        printf("This number is divisible by 5 not 3. \n");
    }
    else
    {
        printf("This number is not divisible by both 3 and 5. \n");
    }

    printf("Thank_You_Dear");
    return 0;
}