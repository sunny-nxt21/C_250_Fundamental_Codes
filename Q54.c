// Write a C program to find the sum of numbers from 1 to N.

#include<stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    

    for(int i=1; i<=n; i= i+1)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}