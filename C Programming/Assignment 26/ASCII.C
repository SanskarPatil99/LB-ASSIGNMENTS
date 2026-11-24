#include<stdio.h>
#include<stdlib.h>




void DisplayASCII()
{
   int i=0;

   printf("%-10s %-10s %-12s %-10s\n","symbol","Decimal","HexaDecimal","Octal");
   printf("---------------------------------------------------\n");
    
    for(i=0;i<=127;i++)
    {
        if(i>=32 && i<=126)
        {
            printf("%-10c %-10d %-12X %-10o\n", i, i, i, i);
        }
        else
        {
            printf("%-10s %-10d %-12X %-10o\n", "NP", i, i, i); 
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}