#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iTemp=0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(int i=iStart;i<=iEnd;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Start of Range: ");
    scanf("%d",&iValue1);

    printf("Enter End of Range: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}