#include<stdio.h>
#include<stdlib.h>

void calculateDiscount(float fAmount)
{
    float fDiscount=0.0f;
    float fFinalAmount=0.0f;

    if(fAmount<0)
    {
        printf("Negative Purchase Amounts are Invalid");
        return;
    }
    else if(fAmount<=1000)
    {
        fDiscount=0.0f;
    }
    else if(fAmount<=5000)
    {
        fDiscount=fAmount*10/100;
    }
    else
    {
        fDiscount=fAmount*20/100;
    }

    fFinalAmount=fAmount-fDiscount;
    printf("Payable Amount: %.2f",fFinalAmount);
}

int main()
{
    float fAmount=0.0f;
    printf("Purchase Amount: ");
    scanf("%f",&fAmount);

    calculateDiscount(fAmount);

    return EXIT_SUCCESS;
}