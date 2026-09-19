// Write a C program to convert Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    float celsius;
    float fahrenheit;

    printf("celsius = ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Celsius to Fahrenheit result os = %.2f", fahrenheit);
    return 0;
}