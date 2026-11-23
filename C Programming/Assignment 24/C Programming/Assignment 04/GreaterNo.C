#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst,int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d is Greater",iFirst);

    }
    else if(iFirst<iSecond)
    {
        printf("%d is Greater",iSecond);
    }
    else
    {
        printf("Both Numbers are Equal");
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    
    printf("Enter First Number: ");
    scanf("%d",&iValue1);

    printf("Enter Second Number: ");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}