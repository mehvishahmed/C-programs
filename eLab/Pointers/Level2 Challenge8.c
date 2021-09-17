#include <stdio.h>
#include <stdint.h>
void blank() {printf("*n **ans *last");}
int main()
{
    int T;
    scanf("%d", &T);
    int count;
    for(count=1; count<=T; count++)
    {
        int n, a, b, x, base;
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);
        if(a>b)
        {
          x=a;
          a=b;
          b=x;
        }
        n--;
        base=n*a;
        if(a!=b)
        {
          while(n>=0)
          {
            printf("%d ", base);
            n--;
            base+=b-a;
          }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
