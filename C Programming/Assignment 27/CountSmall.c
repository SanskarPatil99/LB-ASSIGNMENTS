#include <stdio.h>
#include <stdlib.h>

int CountSmall(char *str)
{
    int iCount=0;

    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[100]={'\0'};
    int iRet=0;

    printf("Enter The String: ");
    scanf("%[^\n]s",Arr);

    iRet=CountSmall(Arr);

    printf("Number of Small Letters: %d\n",iRet);

    return EXIT_SUCCESS;
}