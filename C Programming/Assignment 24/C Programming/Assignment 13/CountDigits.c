#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit=0;
    int iCount=0;
    while(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit>3 && iDigit<7)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Frequency of Between 3 And 7 Digit is %d\n", iRet);

    return EXIT_SUCCESS;
}