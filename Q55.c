// Write a C program to find the sum of all even numbers from 1 to N.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int even;
    for (int i = 1; i<=n; i++)
    {
        if (i%2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d \n", sum);
    return 0;
}