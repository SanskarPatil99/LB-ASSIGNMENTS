#include<stdio.h>
#include<stdlib.h>

int oddFactorial(int iNo)
{
    long Factorial=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (int i=0;i<=iNo;i++)
    {
       if(i%2!=0)
       {
            Factorial = Factorial*i;
       }
    }
    return Factorial;
    
}

int main()
{
    int iValue=0;int iRet=0;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    iRet=oddFactorial(iValue);

    printf("odd Factorial of Number is %d",iRet);

    return EXIT_SUCCESS;

}