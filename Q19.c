// Write a C program to calculate simple interest.
#include<stdio.h>
int main()
{
    int principle;
    int rate;
    int time;

    printf("principle = ");
    scanf("%d", &principle);

    printf("rate = ");
    scanf("%d", &rate);
    printf("rate = %d%%\n", rate);

    printf("time = ");
    scanf("%d", &time);

    int interest;
    interest = (principle * rate * time ) / 100;
    printf("Finally the simple interest = %d", interest);
    return 0;
}