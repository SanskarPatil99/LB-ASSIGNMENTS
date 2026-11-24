#include <stdio.h>
#include <stdlib.h>

int FrequencyDifference(char *str)
{
    int iCapital=0;
    int iSmall=0;

    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iSmall++;
        }
        else if(*str>='A' && *str<='Z')
       {
         iCapital++;
       }
       str++;
    }
    printf("Capital letters : %d\n", iCapital);
    printf("Small letters   : %d\n", iSmall);

    return iSmall - iCapital;
}
int main()
{
    char Arr[100]={'\0'};
    int iRet=0;

    printf("Enter The String: ");
    scanf("%[^\n]s",Arr);

    iRet=FrequencyDifference(Arr);

     printf("Difference (small - capital): %d\n", iRet);

    return EXIT_SUCCESS;
}
