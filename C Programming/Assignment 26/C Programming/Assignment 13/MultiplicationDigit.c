#include<stdio.h>
#include<stdlib.h>

int MultiDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
     if (iNo == 0)
    {
        return 0;  
    }
    int iDigit=0;
    int iMulti=1;
    while(iNo!=0)
    {
        iDigit=iNo % 10;
        iMulti=iDigit*iMulti;
        iNo=iNo/10;
    }
    return iMulti;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultiDigit(iValue);

    printf("Multiplication of  Digits is %d\n", iRet);

    return EXIT_SUCCESS;
}