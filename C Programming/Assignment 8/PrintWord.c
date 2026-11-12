#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    const char *words[] = {"Zero","One","Two","Three","Four",
                           "Five","Six","Seven","Eight","Nine"};

    if(iNo < 0)
    {
        iNo = -iNo;   
    }

    if(iNo >= 0 && iNo <= 9)
    {
        printf("%s\n", words[iNo]);
    }
    else
    {
        printf("Please enter a single digit (0-9)\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a single digit number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}