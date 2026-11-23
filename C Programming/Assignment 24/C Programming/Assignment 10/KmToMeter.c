#include<stdio.h>
#include<stdlib.h>

#define Meter 1000

int KmToMeter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int MT=1;

    MT=Meter*iNo;

    return MT;

}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet=KmToMeter(iValue);

    printf("Total Distance Travelled is %d Meter\n",iRet);

    return EXIT_SUCCESS;


}