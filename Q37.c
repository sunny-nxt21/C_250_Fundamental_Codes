// Write a C program to find the largest among four numbers.

#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    
    printf("n1 = ");
    scanf("%d", &n1);

    printf("n2 = ");
    scanf("%d", &n2);

    printf("n3 = ");
    scanf("%d", &n3);

    printf("n4 = ");
    scanf("%d", &n4);

    if ((n1 > n2) && (n1 > n3) && (n1 > n4))
    {
        printf("The largest number is = %d \n", n1);
    }
    else if ((n2 > n1) && (n2 > n3) && (n2 > n4))
    {
        printf("The largest number is = %d \n", n2);
    }
    else if ((n3 > n1) && (n3 > n2) && (n3 > n4))
    {
        printf("The largest number is = %d \n", n3);
    }
    else if ((n4 > n1) && (n4 > n2) && (n4 > n3))
    {
        printf("The largest number is = %d \n", n4);
    }
    else
    {
        printf("This is similar number");
    }
    return 0;
}