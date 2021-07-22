#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *qtr,*ptr;
    qtr =&a;
    ptr =&b;
    int sum = *ptr + *qtr;
    printf("%d", sum);
    return 0;
}
