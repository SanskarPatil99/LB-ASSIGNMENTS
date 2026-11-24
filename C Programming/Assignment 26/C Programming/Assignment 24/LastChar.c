#include<stdio.h>
#include<stdlib.h>

int LastIndex(char *str,char ch)
{
    int iIndex=0;
    int iPos=-1;

    while(*str!='0')
    {
        if(*str!='0')
        {
            if(*str==ch)
            {
                iPos=iIndex;
            }
            str++;
            iIndex++;
        }
    }
    return iPos;
}

int main()
{
    char Arr[100];
    char cValue='\0';
    int iRet=0;

    printf("Enter String: ");
    scanf("%99[^\n]",Arr);

    printf("Enter Character: ");
    scanf(" %c",&cValue);

    iRet=LastIndex(Arr,cValue);

    if(iRet==-1)
    {
        printf("Caracter is not present in the string\n");
    }
    else
    {
        printf("Last occurrence of '%c' is at index : %d\n", cValue, iRet);
    }

    return EXIT_SUCCESS;
}