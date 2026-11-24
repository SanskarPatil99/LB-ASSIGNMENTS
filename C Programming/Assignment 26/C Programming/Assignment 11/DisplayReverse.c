#include <stdio.h>
#include <stdlib.h>

void DisplayReverse(int iStart, int iEnd)
{
    for (int i = iStart; i >= iEnd; i--)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    if (iValue1 < iValue2)
    {
        printf("Invalid Range\n");
        return EXIT_FAILURE;
    }

    DisplayReverse(iValue1, iValue2);

    return EXIT_SUCCESS;
}