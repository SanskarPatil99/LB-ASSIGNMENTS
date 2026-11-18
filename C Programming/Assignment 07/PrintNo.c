#include<stdio.h>
#include<stdlib.h>


int Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
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
