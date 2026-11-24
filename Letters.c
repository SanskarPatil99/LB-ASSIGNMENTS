#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplayPattern(char ch)
{
    char i='\0';

    if(ch>='A' && ch<='Z')
    {
        for(i=ch;i<='Z';i++)
        {
            printf("%c\t",i);
        }
        printf("\n");
        return TRUE;
    }
    else if(ch>='a' && ch<='z')
    {
        for(i=ch;i>='a';i--)
        {
            printf("%c\t",i);
        }
        printf("\n");
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

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    bRet = DisplayPattern(cValue);

    if(bRet==FALSE)
    {
        printf("It is not alphabet\n");
    }
    return EXIT_SUCCESS;
}
