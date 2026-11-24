#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int Multi=0;

    Multi=iNo1*iNo2*iNo3;

    return Multi;
}


int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;

    printf("Please Enter Three Numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of Three Number is %d",iRet);

    return EXIT_SUCCESS;
}