// Write a C program to print numbers from 1 to N.

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++ )
    {
        printf("%d\n", i);
    }
    
    return 0;
}