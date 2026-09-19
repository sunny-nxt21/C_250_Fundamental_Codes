// Write a C program to calculate the perimeter of a rectangle.

#include<stdio.h>
int main()
{
    int base;
    int height;
    int perimeter;

    printf("base = ");
    scanf("%d", &base);

    printf("height = ");
    scanf("%d", &height);

    perimeter = 2 * (base + height);
    printf("The perimeter of a rectangle = %d", perimeter);
    return 0;
}