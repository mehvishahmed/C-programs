#include <stdio.h>
int main()
{
    int GrossPayment,basic,da,hra;
    scanf("%d",&basic);
    scanf("%d",&da);
    scanf("%d",&hra);
    GrossPayment=basic+(basic*da)/100+(basic*hra)/100;
    printf("%.2d",GrossPayment);
    return 0;
}
