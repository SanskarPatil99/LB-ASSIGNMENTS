#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int iIndex=0;

    while(*str!='\0')
    {
        while(*str!='\0')
        {
            if(*str==ch)
            {
                return iIndex;
            }
            str++;
            iIndex++;
        }
    }
    return -1;
}

int main()
{
    char Arr[100];
    char cValue='\0';
    int iRet=0;

    printf("Enter String: ");
    scanf("%99[^\n]",Arr);

    printf("Enter Charcter: ");
    scanf(" %c",&cValue);

    iRet=FirstChar(Arr,cValue);

    if(iRet==-1)
    {
        printf("Character is not present in the string\n");
    }
    else
    {
        printf("First Occurence of '%c is at index: %d\n",cValue,iRet);
    }
    return EXIT_SUCCESS;
}