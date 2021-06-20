#include <stdio.h>
int main()
{
    float number1,number2,approx;
    scanf("%f %f",&number1,&number2);
    if (number1>number2)
        approx=(number1-number2);
    else approx=(number2-number1);
    if (approx<=0.5)
        printf("Approximate Number");
    else printf("Not an Approximate Number");
    return 0;
}
