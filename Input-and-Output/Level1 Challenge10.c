#include <stdio.h>
#include <math.h>
int main()
{
	 int unitconsumed,costperunit,TotalBillAmount;
	 scanf("%d %d",&unitconsumed,&costperunit);
	 TotalBillAmount=pow(unitconsumed,costperunit);
	 scanf("%d", &TotalBillAmount);
	 printf("%d",TotalBillAmount);
	 return 0;
}
