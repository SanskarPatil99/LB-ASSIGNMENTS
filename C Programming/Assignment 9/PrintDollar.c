#include<stdio.h>
#include<stdlib.h>

#define Rate 92

int DollarToInr(double iNo)
{
    return iNo * Rate;
}
int main()
{
    double dUSD=0.0;
    double dINR = 0.0;

     printf("Enter amount in US Dollar: ");
     scanf("%lf", &dUSD);

     dINR=DollarToInr(dUSD);

     printf("Value OF  %.2lf USD IN INR is=%.2lf INR\n",dUSD,dINR);

      return EXIT_SUCCESS;
}