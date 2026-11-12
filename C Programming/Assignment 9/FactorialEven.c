#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    long Factorial=1;
    for(int i=1;i<iNo;i++)
    {
        if(i%2==0)
        {
            Factorial=Factorial*i;
        }
    }
     return Factorial;
}

int main()
{
    int iValue=0;int iRet=0;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial of Number is %d",iRet);

    return EXIT_SUCCESS;


}