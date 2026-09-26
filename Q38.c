// Write a C program to find the smallest among four numbers.

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf ("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    printf("d = ");
    scanf ("%d", &d);

    if ((a < b) && (a < c) && (a < d))
    {
        printf("The smollest number is : %d", a);
    }
    else if ((b < a) && (b < c) && (b < d))
    {
        printf("The smollest number is : %d", b);
    }
    else if ((c < a) && (c < b ) && (c < d ))
    {
        printf("The smollest number is : %d", c);
    }
    else if ((d < a ) && ( d < b ) && (d < c))
    {
        printf("The smollest number is : %d", d);
    }
    else
    {
        printf("This is  similar number ");
    }
}