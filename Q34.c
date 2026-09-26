// Write a C program to check whether a character is a vowel or consonant. 

#include<stdio.h>
int main()
{
    char Alphabet;

    printf("Alphabet = ");
    scanf("%c", &Alphabet);

    if ((Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u') || 
        (Alphabet == 'A' || Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' || Alphabet == 'U'))
    {
        printf("This character is Vowel");
    }

    else if ((Alphabet >= 'a' && Alphabet <= 'z')||
            (Alphabet <= 'Z' && Alphabet >= 'A'))
    {
        printf("This character is Consonant");
    }

    else
    {
        printf("This not charecter");
    }
    
    return 0;
}