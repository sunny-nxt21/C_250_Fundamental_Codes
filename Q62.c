// Write a C program to check whether a number is a palindrome.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int real = n;
    int reminder;
    int number = 0;

    while(n != 0)
    {
        reminder = n%10;
        number = number * 10  + reminder;
        n = n/10;
    }
    if (number == real)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}