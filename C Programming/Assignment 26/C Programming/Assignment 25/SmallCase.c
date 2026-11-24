#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch>=91 && ch<=122)
    {
        return TRUE;
    }
    else
    {
         return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

      if (bRet == TRUE)
    {
        printf("It is Small Letter\n");
    }
    else
    {
        printf("It is not a Small Letter\n");
    }

    return EXIT_SUCCESS;
}