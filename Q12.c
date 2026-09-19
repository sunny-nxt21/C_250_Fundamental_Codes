// Write a C program to calculate the percentage of five subjects.

#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    a = 55;
    b = 73;
    c = 24;
    d = 92;
    e = 63;

    float sum;
    sum = a + b + c + d + e;

    float percentage;
    percentage = (sum / 5);

    printf("Finally, Percentage marks is = %.2f%%", percentage);
    return 0;
}