// Write a C program to find the product of digits of a number.
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int product = 1;
    int reminder;

    for(int i=0; n>0; i++)
    {
        reminder = n%10;
        product = product * reminder;
        n = n/10;
    }
    printf("%d", product);
}