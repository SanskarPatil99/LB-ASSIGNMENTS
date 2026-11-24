#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo)
{
    if (iNo == 10)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet1 = FALSE;
    BOOL bRet2 = FALSE;

    printf("Please Enter Two Numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet1 = ChkEqual(iValue1);
    bRet2 = ChkEqual(iValue2);

    if (bRet1 == TRUE)
    {
        printf("First number: Equal\n");
    }
    else
    {
        printf("First number: Not Equal\n");
    }

    if (bRet2 == TRUE)
    {
        printf("Second number: Equal\n");
    }
    else
    {
        printf("Second number: Not Equal\n");
    }

    return EXIT_SUCCESS;
}