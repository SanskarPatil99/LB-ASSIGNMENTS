#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}