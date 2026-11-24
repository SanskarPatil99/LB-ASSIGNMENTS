#include<stdio.h>
#include<stdlib.h>
float Percentage(float Obtained,float Total)
{
    float Percentage=0;

    Percentage=(Obtained/Total)*100;

    return Percentage;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0f;

    printf("Please Enter Obtained MARKS: ");
    scanf("%d",&iValue1);

    printf("Please Enter total Marks: ");
    scanf("%d",&iValue2);

    if (iValue2 <= 0)
    {
        printf("Total Marks must be greater than 0\n");
        return EXIT_FAILURE;
    }

    fRet=Percentage(iValue1,iValue2);

    printf("Obtained Percentage is %.2f%%\n",fRet);

    return EXIT_SUCCESS;
}