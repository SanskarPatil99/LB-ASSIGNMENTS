#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    long LFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int i=1;i<=iNo;i++)
    {
        LFact=LFact*i;
    }
    return LFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Value: ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of Number is %d",iRet);

    return 0;
}