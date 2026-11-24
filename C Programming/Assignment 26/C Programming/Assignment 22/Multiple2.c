#include <stdio.h>
#include <stdlib.h>

void DisplayMultiples(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayMultiples(iValue);

    return EXIT_SUCCESS;
}