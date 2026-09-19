// Write a C program to calculate the area of a rectangle.

#include<stdio.h>
int main()
{
    int base;
    int height;

    printf("base = ");
    scanf("%d", &base);

    printf("height = ");
    scanf("%d", &height);

    int area;
    area = base * height;
    printf("The are of a rectangle = %d", area);
    return 0;
}