// Write a C program to reverse a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int reminder;
    int number = 0;

    while (n>0)
    {
        reminder = n%10;
        number = number * 10 + reminder;
        n = n/10;
    }
    printf("%d", number);
    return 0;
}