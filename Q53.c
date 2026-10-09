// Write a C program to print the multiplication table of a number.


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i = i + 1)
    {
        printf("%d\n", n * i);
    }

    return 0;
}