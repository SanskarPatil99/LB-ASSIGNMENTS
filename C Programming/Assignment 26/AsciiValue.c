 #include<stdio.h>
#include<stdlib.h>




void DisplayASCII(char ch)
{
   printf("Charcter: %c\n",ch);
   printf("Decimal:%d\n",ch);
   printf("HexaDecimal:%x\n",ch);
   printf("Octal: %o\n",ch);
}

int main()
{
    char cValue='\0';
   

    printf("Enter The Character: ");
    scanf("%c",&cValue);

    DisplayASCII(cValue);
     
    
    return EXIT_SUCCESS;
}
