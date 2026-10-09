// Write a C program to find the sum of all odd numbers from 1 to N.

#include<stdio.h>
int main() 
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if(i%2 == 1)
        {
            printf("%d \n", i);
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}