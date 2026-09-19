// Write a C program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int a = 7;
    int b = 9;

    a = a - b;
    b = a + b;
    a = b - a;

    printf("The value of a = %d\n", a);
    printf("the value of b = %d", b);
    return 0;
}