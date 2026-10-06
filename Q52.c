// Write a C program to print all odd numbers from 1 to N.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if (i % 2 == 1)
        { 
            printf("%d \n", i);
        }
     
    }
    return 0;
}