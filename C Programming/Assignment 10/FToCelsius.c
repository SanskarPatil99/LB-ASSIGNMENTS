#include <stdio.h>
#include <stdlib.h>

double FhToCs(float fTemp)
{
    double Celsius = 0.0;

    Celsius = (fTemp - 32) * (5.0 / 9.0);

    return Celsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature is %lf Celsius\n", dRet);

    return EXIT_SUCCESS;
}