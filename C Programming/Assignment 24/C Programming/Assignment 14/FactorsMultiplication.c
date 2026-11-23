#include<stdio.h>
#include<stdlib.h>

long long MultiFactors(int iNo)
{
    long long iMult=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            iMult=iMult*i;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultiFactors(iValue);

    printf("Multiplication of Factors is %lld\n", iRet);

    return EXIT_SUCCESS;
}