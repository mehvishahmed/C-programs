#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,count,i=1,x,y;
    printf("Enter number of test cases: ");
    scanf("%d",&n);  //NO. OF TEST CASES
    while(i<=n)
    {
        count=0;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);   //RANGE (FROM A TO B)
        x=sqrt(a);
        y=sqrt(b);
        while(x<=y)
        {
            if(x*x<=b)
            count++;
            x++;
        }
        printf("Number of perfect squares between %d and %d : %d\n",a,b,count);
        i++;
    }
    return 0;
}
