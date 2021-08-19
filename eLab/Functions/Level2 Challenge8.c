#include <stdio.h>
#include <string.h>
void check(char *,int);
char a[100][100],aa[10];
int t,n,k,i;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        check(aa,k);
        printf("\n");
    }
    return 0;
}
void check(char  * w,int k)
{
    int z=0,q,j;
    char b[100][100];
    while(k--)
    {
        scanf("%d",&q);
        for(i=0;i<q;i++)
        {
            scanf("%s",b[z]);
            z++;
        }
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<z;j++)
        {
            if(strcmp(a[i],b[j])==0)
            {
                c=1;
                break;
            }
        }
        (c>0)?printf("YES "):printf("NO ");
    }
}
