// Write a C program to check whether a number is prime.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int only_1;

    int i = 2;
    while (i < n)
    {
        if (n%i == 1)
        {
            printf("Prime");
        }
        else if (n%i != 1)
        {
            printf("Not Prime;");
        }
        i++;
    }
    return 0;
}