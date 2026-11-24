#include<stdio.h>
#include<stdlib.h>

void DisplayEvenRange(int iStart,int iEnd)
{
    int iTemp=0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(int i= iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);

    DisplayEvenRange(iValue1,iValue2);

    return EXIT_SUCCESS;
}