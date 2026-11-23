#include <stdio.h>
#include <stdlib.h>

void DisplayNumbers(int iNo)
{
   int i=0;

   for(i=iNo;i>=1;i--)
   {
        printf("%d\t", i);
        if(i>1)
        {
            printf("#\t");
        }
        
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &iValue);

    DisplayNumbers(iValue);

    return EXIT_SUCCESS;
}