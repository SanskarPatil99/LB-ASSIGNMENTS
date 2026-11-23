#include<stdio.h>
 
void Display(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt)
    {
        printf(" %d *",iNo);
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number: \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}