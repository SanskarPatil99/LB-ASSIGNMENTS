#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int Year)
{
    if((Year%400==0) || (Year%4==0 && Year%100!=0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not A Leap Year");
    }
}
int main()
{
    int iYear=0;

    printf("Enter Year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}