// Write a C program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n %d\n", a,b);
  
    return 0;
}