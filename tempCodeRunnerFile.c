// Write a C program to generate Fibonacci series.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int n1,n2,n3;
    scanf("%d %d", &n1, &n2);

    for (int i=1; i<=n; i++)
    {
        n3 = n1+n2;

        printf("%d",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
