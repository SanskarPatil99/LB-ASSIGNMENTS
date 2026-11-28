#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int ilength)
{
   int iCnt=0;
   int iFound=0;
   for(iCnt=0;iCnt<ilength;iCnt++)
   {
        if(Arr[iCnt]%5==0)
        {
            printf("%d\n",Arr[iCnt]);
            iFound++;
        }
   }
   if(iFound==0)
   {
        printf("No Numbers are Divisible by 5\n");
   }
}

int main()
{
    int iSize = 0,iCnt=0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

    p =(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }
    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Difference(p,iSize);

   free(p);

    return 0;
}