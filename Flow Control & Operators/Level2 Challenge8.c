#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    scanf("%f",&fahrenheit);
    celsius= (fahrenheit-32)*5/9;
    if (celsius>=150)
        printf("%.2f Centigrade\nVery Hot",celsius);
    else if (celsius>=100)
        printf("%.2f Centigrade\nHot",celsius);
    else printf("%.2f Centigrade\nModerate",celsius);
    return 0;
}
