#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    long Factorial1=1;
    long Factorial2=1;
    for(int i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            Factorial1=Factorial1*i;
        }
        else 
        {
            Factorial2=Factorial2*i;
        }
    }
    return Factorial1-Factorial2;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Difference between even and odd factorial: %ld\n", iRet);

    return EXIT_SUCCESS;
}