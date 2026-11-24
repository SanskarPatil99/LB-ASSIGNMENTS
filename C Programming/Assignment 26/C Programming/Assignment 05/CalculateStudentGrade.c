#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks>=90 && fMarks<=100)
    {
        printf("A",fMarks);
    }
    else if(fMarks>=75 && fMarks<=89)
    {
        printf("B",fMarks);
    }
    else if(fMarks>=60 && fMarks<=74)
    {
        printf("C",fMarks);
    }
    else if(fMarks>=40 && fMarks<=59)
    {
        printf("D",fMarks);
    }
    else
    {
        printf("FAIL");
    }
}
 
int main()
{
    float fMarks=0.0f;

    printf("Enter Marks: ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}