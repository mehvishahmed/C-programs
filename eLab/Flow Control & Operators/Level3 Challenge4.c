#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float e,r1,r2;
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d)
    {
        case 0:
            r1=r2=-b/(2.0*a);
            printf("%.2f and %.2f",r1,r2);
            break;
        default:
            if(d>0)
            {
                e=sqrt(d);
                r1=(-b+e)/(2.0*a);
                r2=(-b-e)/(2.0*a);
                printf("%.2f and %.2f",r1,r2);
            }
            else
            {
                e=sqrt(-d);
                r1=(-b)/(2.0*a);
                r2=(e)/(2.0*a);
                printf("%.2f + i%.2f and %.2f - i%.2f",r1,r2,r1,r2);
            }
    }
	return 0;
}
