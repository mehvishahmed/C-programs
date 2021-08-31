#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    int a,b;
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    a=amtgiven/billamt;
    b=amtgiven%billamt;
    printf("Quotient:%d\n",a);
    printf("Remainder:%d",b);
    return 0;
}
