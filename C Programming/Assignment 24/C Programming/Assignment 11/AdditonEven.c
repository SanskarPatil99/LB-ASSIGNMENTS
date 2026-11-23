#include <stdio.h>
#include <stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    for (int i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    if (iValue1 > iValue2)
    {
        printf("Invalid Range\n");
        return EXIT_FAILURE;
    }

    iRet = RangeSum(iValue1, iValue2);

    if (iRet < 0)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Sum of Even Numbers in Range is %d\n", iRet);
    }

    return EXIT_SUCCESS;
}