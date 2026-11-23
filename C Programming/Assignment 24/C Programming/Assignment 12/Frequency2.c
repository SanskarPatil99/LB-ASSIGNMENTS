#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit =0;
    int iCount=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==2)
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
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);

    printf("Frequency of 2 is %d\n", bRet);

    return EXIT_SUCCESS;
}