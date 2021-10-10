#include <stdio.h>
#include <stdlib.h>
int dfs(int*visited,int sv,int*count,int**a,long long int k,long long int*val,long long int sum,int cn,int d)
{
   int i;
   cn++;
   visited[sv]=1;
   sum+=val[sv];
   if(sum>=k)
   {
       if(cn<d)
           d=cn;
       return d;
   }
   for(i=0;i<count[sv];i++)
   {
       if(visited[a[sv][i]]==0)
       {
           d=dfs(visited,a[sv][i],count,a,k,val,sum,cn,d);
       }
   }
   return d;
}
int main()
{
   int n,q,i,j;
   scanf("%d%d",&n,&q);
   int*count=(int*)calloc(n+1,sizeof(int));
   int*count1=(int*)calloc(n+1,sizeof(int));
   int*visited=(int*)calloc(n+1,sizeof(int));
   int**arr=(int**)malloc((n+1)*sizeof(int*));
   int x[n-1],y[n-1];
   long long int a[n+1];
   for(i=1;i<=n;i++)
       scanf("%lld",&a[i]);
   for(i=0;i<n-1;i++)
   {
       scanf("%d%d",&x[i],&y[i]);
       count[x[i]]++;
       count[y[i]]++;
   }
   for(i=1;i<=n;i++)
       arr[i]=(int*)malloc(count[i]*sizeof(int));
   for(i=0;i<n-1;i++)
   {
       arr[x[i]][count1[x[i]]]=y[i];
       count1[x[i]]++;
       arr[y[i]][count1[y[i]]]=x[i];
       count1[y[i]]++;
   }
   int xi,p;
   long long int k;
   for(i=0;i<q;i++)
   {
       scanf("%d%lld",&xi,&k);
       p=dfs(visited,xi,count,arr,k,a,0,0,n+1);
       if(p==n+1)
           printf("-1\n");
       else
           printf("%d\n",p);
       for(j=1;j<=n;j++)
           visited[j]=0;
   }
   return 0;
}
