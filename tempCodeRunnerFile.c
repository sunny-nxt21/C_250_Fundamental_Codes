// Write a C program to find the power of a number using a loop.

#include<stdio.h>
int main()
{
    int base, power;
    scanf("%d %d", &base, &power);

    int result = 1;
    
    for(int i = 1; i <= power; i++)
    {
        result = result * base;

    }
    printf("%d", result);
    return 0;
}