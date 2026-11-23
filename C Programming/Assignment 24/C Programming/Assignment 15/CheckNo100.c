#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkGreater(int iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    bRet=chkGreater(iValue);

    if(bRet==1)
    {
        printf("Number is Greater Than 100");
    }
    else
    {
        printf("Number is Not Greater Than 100");
    }
}