#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    
    }
    for(i=1;i<=iNo;i++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;

}