#include <stdio.h>
int main()
{
    int matprob[100],n,c,sum,mult,t;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       int i,j,k;
       c=0;
       for(i=0;i<n;i++)
           scanf("%d",&matprob[i]);
       for(i=0;i<n;i++)
       {
           for(j=i;j<n;j++)
           {
               sum=0,mult=1;
               for(k=i;k<=j;k++)
               {
                   sum+=matprob[k];
                   mult*=matprob[k];
               }
               if(sum==mult)
                   c++;
           }
       }
       printf("%d\n",c);
    }
    return 0;
}
