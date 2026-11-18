#include<stdio.h>
#include<stdlib.h>

void ReverseTable(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int i=10;i>=1;i--)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue=0;

    printf("Enter The Number: ");
    scanf("%d",&iValue);

    ReverseTable(iValue);

    return EXIT_SUCCESS;

}