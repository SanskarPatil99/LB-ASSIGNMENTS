
#include <stdio.h>
#include <stdlib.h>

void DisplayReverse(char *str)
{
    int iLen = 0;
    int i = 0;

    // Find the length of the string
    while (str[iLen] != '\0')
    {
        iLen++;
    }

    // Print from the last character to the first
    for (i = iLen - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter The String: ");
    scanf("%99[^\n]", Arr);

    printf("Reverse string: ");
    DisplayReverse(Arr);

    return EXIT_SUCCESS;
}