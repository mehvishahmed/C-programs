#include <stdio.h>
#include <string.h>
int cmp(const void *a, const void *b)
{
    return 0;
}
int main()
{
    int n,i,j,k,q,sum=0,l,x;
    char s[1000000],s1[1000000];
    scanf("%d",&q);
    while(q--)
    {
        j=0;
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            l=i;
            while(l!=0)
            {
                s[j]=l%10+48;
                j++;
                l=l/10;
            }
        }
        s[j]='\0';
        for(i=0,x=j-1;x>=0;i++,x--)
        {
            s1[i]=s[x];
        }
        k=s1[n-1]-48;
        sum+=k;
    }
    printf("%d",sum);
    int cmp(const void *a, const void *b);
    return 0;
}
