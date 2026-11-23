#include<stdio.h>
#include<stdlib.h>

void strLowerCase(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='z')
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter String: ");
    scanf("%[^\n]s",Arr);

    strLowerCase(Arr);

    printf("String in Small Letters: %s\n",Arr);

    return EXIT_SUCCESS;
}