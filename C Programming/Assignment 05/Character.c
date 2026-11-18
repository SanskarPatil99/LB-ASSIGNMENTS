#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void CheckCharacterType(char cValue)
{
    if(isupper(cValue))
    {
        printf("UpperCase Alphabet");
    }
    else if(islower(cValue))
    {
        printf("LowerCase Alphabet");
    }
    else
    {
        printf("Inavlid Alphabet");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter a Charcter: ");
    scanf(" %c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}