#include <stdio.h>
#include <stdlib.h>

#define SqFtToSqM 0.092903

double SqFeetToSqMeter(float fArea)
{
    if (fArea < 0)
    {
        fArea = -fArea;
    }

    double Result = 0.0;

    Result = fArea * SqFtToSqM;

    return Result;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area in Square Feet: ");
    scanf("%f", &fValue);

    dRet = SqFeetToSqMeter(fValue);

    printf("Area in Square Meter is %lf\n", dRet);

    return EXIT_SUCCESS;
}