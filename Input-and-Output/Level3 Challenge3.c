#include <stdio.h>
int main()
{
    float basicPay,employeeFund,employerFund;
    scanf("%f",&basicPay);
    employeeFund=(basicPay/100.0)*17.5;
    employerFund=(basicPay/100.0)*23.5;
    printf("%.2f\n%.2f",employeeFund,employerFund);
    return 0;
}
