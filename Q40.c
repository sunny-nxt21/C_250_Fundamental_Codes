// Write a C program to determine whether a triangle is equilateral, isosceles or scalene.

#include<stdio.h>
int main ()
{
    int a;
    int b;
    int c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    if (a == b && b == c && c == a)
    {
        printf("This is called Equilateral Triangle");
    }
    else if ((a == b) || (b == c) || (a == c))
    {
        printf("This is called Isosceles Triangles");
    }
    else
    {
        printf("This is called Scalene triangle");
    }
    return 0;
}