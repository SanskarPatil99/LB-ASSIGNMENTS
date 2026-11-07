#include <stdio.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Unit Consumption");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return 0;
}