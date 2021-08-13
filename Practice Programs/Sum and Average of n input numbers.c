#include <stdio.h>
int main()
{
    int maxInput;
    int i;
    double number, average, sum = 0.0;
    printf("How many numbers: \n");
    scanf("%d",&maxInput);
    for(i=1;i<= maxInput;++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);

        if (number < 0.0)
        {
            goto jump;
        }
        sum += number;
    }

    jump:
        average = sum / (i - 1);
        printf("SUM = %.2f\n", sum);
        printf("AVERAGE = %.2f", average);

    return 0;
}
