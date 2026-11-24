#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam at 7 AM\n");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8.30 AM\n");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9.20 AM\n");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10.30 AM\n");
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Your Division: ");
    scanf("%c", &cValue);

    bRet = DisplaySchedule(cValue);

    if (bRet == FALSE)
    {
        printf("Invalid division\n");
    }

    return EXIT_SUCCESS;
}