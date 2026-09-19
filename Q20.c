// Write a C program to calculate compound interest.

#include<stdio.h>
#include<math.h>
int main()
{
    float principle;
    float rate;
    float time;

    printf("principle = ");
    scanf("%f", &principle);

    printf("rate = ");
    scanf("%f", &rate);

    printf("time = ");
    scanf("%f", &time);

    float amount;
    amount = principle * pow((1 + rate / 100), time);
    
    float interest;
    interest = amount - principle;

    printf("The interest is = %f", interest);
    return 0;
}