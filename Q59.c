// Write a C program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int reminder;

    for(int i=1; n>=i; i++)
    {
        reminder = n%10;
        sum = sum + reminder;
         n = n/10;
    }
    printf("%d", sum);
}