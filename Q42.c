// Write a C program to check admission eligibility based on marks.

#include<stdio.h>
int main()
{
    int marks;
    printf("Your Marks = ");
    scanf("%d", &marks);

    if ( marks >= 70 && marks <=79)
    {
        printf("they can sit for only English");
    }
    else if ( marks >= 80 && marks <= 89)
    {
        printf("they can sit for only Nursing");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("they can sit for any subject of science");
    }
    else
    {
        printf("Again Try Sorry");
    }
}