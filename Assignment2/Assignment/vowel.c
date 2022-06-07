#include<stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("The entered character is a vowel\n");
        break;
    
    default:
        printf("The entered character is a consonant\n");
        break;
    }
    return 0;
}