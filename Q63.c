// Write a C program to check whether a number is prime.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;

    for(int i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}