// Write a C program to calculate the area of a circle.

#include<stdio.h>
int main()
{
    float radious = 6;
    float pi = 3.15;
    float area;

    area =  pi * radious * radious;
    printf("Finally the area of circle = %.0f", area);
    return 0;
}