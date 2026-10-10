// Write a C program to find the GCD of two numbers.

#include<stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int divider;
    int GCD;
    int result = 1;
    for(int i=1; i<=divider; i++)
    {
        GCD = n1/divider && n2/divider;
        int result = result * GCD;
    }
    printf("%d", result);
}