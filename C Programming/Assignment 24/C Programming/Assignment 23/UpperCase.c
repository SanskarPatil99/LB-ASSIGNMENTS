#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%99[^'\n']s",Arr);

    struprx(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;
}