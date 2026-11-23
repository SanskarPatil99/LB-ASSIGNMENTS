#include<stdio.h>
#include<stdlib.h>

void ReverseStr(char *str)
{
    char *pStart=str;
    char *pEnd=str;
    char CTemp='\0';

    while(*pEnd!='\0')
    {
        pEnd++;
    }
    pEnd--;
    while(pStart < pEnd)
    {
        CTemp = *pStart;
        *pStart = *pEnd;
        *pEnd = CTemp;

        pStart++;
        pEnd--;
    }
}
int main()
{
    char Arr[100];

    printf("Enter String: ");
    scanf("%99[^\n]", Arr);

    ReverseStr(Arr);

    printf("Reversed String : %s\n", Arr);

    return EXIT_SUCCESS;
}