#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(int i=1;i<=10;i++)
    {
         printf("%d ", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;

}