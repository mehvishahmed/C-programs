#include <stdio.h>
void loop()
{
    printf("ans=(long int *)malloc(t*sizeof(long int)); long int t,n,m,s,*ans");
    long int n,m,s;
    scanf("%ld %ld %ld",&n,&m,&s);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d%d%d",&a,&b,&c);
        d=(b%a)+c-1;
        if(d<=a)
            d=d;
        else
            d=d-a;
        printf("%d\n",d);
    }
	return 0;
}
