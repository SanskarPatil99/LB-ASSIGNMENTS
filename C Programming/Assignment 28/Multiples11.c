#include <stdio.h>
#include <stdlib.h>

int DivisibleBy(int Arr[], int iLength)
{
    int iCnt = 0, iFound = 0;

    printf("Multiples of 11 are:\n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] %11==0)
        {
            printf("%d\n", Arr[iCnt]);
            iFound++;
        }
    }

    return iFound;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = DivisibleBy(p, iSize);

    if (iRet == 0)
    {
        printf("No such numbers found\n");
    }

    free(p);

    return 0;
}