// Write a C program to check whether a student has passed or failed.

#include<stdio.h>
int main()
{
    int marks;

    printf("enter your marks = ");
    scanf("%d", &marks);

    if (marks < 33)
    {
        printf("The student has failed in her Examination. \n");
    }

    else if (marks >= 33 && marks <= 100)
    {
        printf("The student has Passed in her Examination. \n");
    }
    
    else
    {
        printf("Number Error");
    }
return 0;
}