#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{
    int iCount=0;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet=CountChar(Arr,cValue);
    printf("Frequency of'%c' is:%d\n ",cValue,iRet);

    return EXIT_SUCCESS;
}