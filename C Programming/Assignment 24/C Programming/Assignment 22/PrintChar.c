#include <stdio.h>
#include <stdlib.h>

void DisplayLetters(int iCount)
{
   int i=0;

   for(i=0;i<iCount;i++)
   {
    printf("%c\t",'A'+i);
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &iValue);

    DisplayLetters(iValue);

    return EXIT_SUCCESS;
}