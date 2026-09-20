// . Write a C program to check whether a person is eligible to vote.
#include<stdio.h>
int main()
{
    int age;

    printf("What is your age = ");
    scanf("%d", &age);

    if(age < 18)
    {
        printf("He is not eligible to VOTE");
    }
    else 
    {
        printf("He is eligible to vote");
    }
    
    return 0;
}