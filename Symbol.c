#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSymbol(char ch)
{
   if((ch>=32 && ch<=47) ||
      (ch>58 && ch<=64)||
      (ch >= 91 && ch <= 96)||
      (ch >= 123 && ch <= 126))
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

    bRet=CheckSymbol(cValue);

     if (bRet == TRUE)
    {
        printf("It is a Special Symbol\n");
    }
    else
    {
        printf("It is not a Special Symbol\n");
    }
    
    return EXIT_SUCCESS;
}
