#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth,float fHeight)
{
    float Area=0.2f;

    Area = fWidth*fHeight;

    return Area;

}

int main()
{
    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangel is %lf\n",dRet);

    return EXIT_SUCCESS;
}