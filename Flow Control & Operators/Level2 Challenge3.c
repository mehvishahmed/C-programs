#include <stdio.h>
int main()
{
    int people_age,weight;
    scanf("%d %d",&people_age,&weight);
    if (people_age>18 && weight>40)
        printf("Eligible for Donation");
    else printf("Not Eligible for Donation");
    return 0;
}
