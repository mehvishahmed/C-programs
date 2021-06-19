#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf("%s", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op=='+')
    {
        printf("%lf",num1+num2);
    }
    else if (op=='-')
    {
        printf("%lf",num1-num2);
    }
    else if (op=='*')
    {
        printf("%lf",num1*num2);
    }
    else if (op=='/')
    {
        printf("%lf",num1/num2);
    }
    else 
    {
        printf("INVALID ENTRY");
    }
    return 0;
}
