// Write a C program to convert Fahrenheit to Celsius. 

#include<stdio.h>
int main()
{
    float Fahrenheit;
    float Celsius;

    printf("Fahrenheit = ");
    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32)* 5/9;
    printf("Finally the result is = %.2f", Celsius);
    return 0; 
}