#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChangeCase(char ch,char *result)
{
    if(ch>='a' && ch<='z')
    {
        *result=ch-32;  //small to capital
        return TRUE;
    }
    else if(ch>='A' && ch<='Z')
    {
        *result=ch+32;  //Capital to small
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
    char cResult='\0';
    BOOL bRet=FALSE;

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    bRet=ChangeCase(cValue,&cResult);

    if (bRet == TRUE)
    {
        printf("Converted character is: %c\n", cResult);
    }
    else
    {
        printf("It is not an alphabet\n");
    }
    return EXIT_SUCCESS;
}