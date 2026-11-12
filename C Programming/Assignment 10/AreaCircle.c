#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14159265

double CircleArea(float fRadius)
{
    if (fRadius < 0)
    {
        fRadius = -fRadius;
    }

    double Area = 0.0;
    Area = Pi * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %lf\n", dRet);

    return EXIT_SUCCESS;
}