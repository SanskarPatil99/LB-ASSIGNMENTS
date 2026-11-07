#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if(fMarks>= 60 && iAge>=17)
    {
        printf("Eligible for Admission");
    }
    else if(fMarks<0 || fMarks>100 || iAge<=0)

    {
        printf("Invalid Input");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks=0.0f;
    int iAge=0;

    printf("Enter Marks of Student: ");
    scanf("%f",&fMarks);
    printf("Enter Age of Student: ");
    scanf("%d",&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}