// Write a C program to convert seconds into hours, minutes and seconds.

#include<stdio.h>
#include<math.h>

int main()
{
    float second;
    float hours;
    float minute;
    float remaining_second;

    printf("second = ");
    scanf("%f", &second);

    hours = second / 3600;
    minute = fmod(second, 3600) / 60;
    remaining_second = fmod(second, 60);

    printf("hours = %.2f\n", hours);
    printf("minutes = %.2f\n", minute);
    printf("second = %.2f", remaining_second);
    
    return 0;
}