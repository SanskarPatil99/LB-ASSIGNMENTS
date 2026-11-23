#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue%3==0 && iValue%5==0)
    {
        printf("Divisible by Both");
    }
    else if(iValue%3==0)
    {
        printf("Divsible by 3");
    }
    else if(iValue%5==0)
    {
        printf("Divsible by 5");
    }
    else
    {
        printf("Not Divsible by Either");
    }
}
 
int main(void)
{
    int iValue=0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}
