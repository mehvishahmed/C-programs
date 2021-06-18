#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num1, num2, res;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf("%s", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op=='+')
    {
        res = num1+num2;
    }
    else if (op=='-')
    {
        res = num1-num2;
    }
    else if (op=='*')
    {
        res = num1*num2;
    }
    else if (op=='/')
    {
        res = num1/num2;
    }
    printf("Answer: %f", res);
    return 0;
}
