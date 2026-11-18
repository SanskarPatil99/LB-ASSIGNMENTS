#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("Small Number");
    }
    else if(iNo<=100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}