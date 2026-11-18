#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    printf("Please Enter Full Name: ");
    scanf("%29[^\n]",Name);

    printf("Your Name is %s",Name);

    return EXIT_SUCCESS;
}