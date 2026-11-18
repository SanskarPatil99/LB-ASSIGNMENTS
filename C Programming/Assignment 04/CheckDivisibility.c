#include<stdio.h>
#include<stdlib.h>

void CheckDivisibilty(int iValue)
{
    if(iValue%5==0)
    {
        printf("Divisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");
    }
}
    int main()
    {
        int iValue=0;

        printf("Enter a Number: ");
        scanf("%d",&iValue);

        CheckDivisibilty(iValue);

        return EXIT_SUCCESS;
    }

