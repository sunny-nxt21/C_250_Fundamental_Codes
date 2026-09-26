// Write a C program to check whether a character is a vowel using switch-case.

#include<stdio.h>
int main()
{
    char character;
    printf("Type character name : ");
    scanf("%c", &character);

    switch (character)
    {
        case 'a':
        printf("Vowel");
        break;
        case 'A':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'E':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'I':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'O':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        case 'U':
        printf("Vowel");
        break;

        default:
        printf("Not Vowel that is Consonant");
    }
}