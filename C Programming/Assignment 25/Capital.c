#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch>=65 && ch<=90)
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

    printf("Enter The Character: ");
    scanf("%c",&cValue);

    bRet=ChkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("it is Capital Letter");
    }
    else
    {
        printf("It is Not Capital Letter");
    }

    return EXIT_SUCCESS;
}