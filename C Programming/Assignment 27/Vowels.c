#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int CountVowel(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (ChkVowel(*str) == TRUE)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter The String: ");
    scanf("%99[^\n]", Arr);

    iRet = CountVowel(Arr);

    printf("Number of Vowels: %d\n", iRet);

    return EXIT_SUCCESS;
}