// Write a C program to calculate the area of a triangle.

#include<stdio.h>
int main()
{
    int base;
    int height;
    
    printf("base = ");
    scanf("%d", &base);

    printf("height = ");
    scanf("%d", &height);

    int area_of_triangle;
    area_of_triangle = .5 * base * height;

    printf("The area of triangle = %d", area_of_triangle);
    return 0;
}