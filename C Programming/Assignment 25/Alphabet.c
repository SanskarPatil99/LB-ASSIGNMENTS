#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
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

    printf("Enter the Charcter: ");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);
      if (bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return EXIT_SUCCESS;
}