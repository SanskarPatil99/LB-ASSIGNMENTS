
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%99s", Arr);

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is Present in the string\n");
    }
    else
    {
        printf("Character is not Present in the String\n");
    }

    return EXIT_SUCCESS;
}
