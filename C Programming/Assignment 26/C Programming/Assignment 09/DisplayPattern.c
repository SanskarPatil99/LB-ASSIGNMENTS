#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int i=1;i<=iNo;i++)
    {
        printf("*\t",i);
    }
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
     printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}