#include <stdio.h>
#include <stdlib.h>

int CountLessThanSix(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 1;   // the single digit 0 is less than 6
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountLessThanSix(iValue);

    printf("Frequency of digits less than 6 is %d\n", iRet);

    return EXIT_SUCCESS;
}