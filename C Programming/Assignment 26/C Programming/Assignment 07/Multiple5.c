#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%5==0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}