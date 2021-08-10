#include <stdio.h>
#define N 1000
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0){
        static int adj[N][N],qq[N],aa[N];
        int n,m,h,i,j,no;
        int k,q;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        adj[i][j]=0;
        for(h=0;h<m;h++){
            scanf("%d %d",&i,&j);
            i--,j--;
            adj[i][j]=adj[j][i]=1;
        }
        for(i=0;i<n;i++)
            aa[i]=-1;
        no=0;
        for(i=0;i<n;i++)
        if(aa[i]==-1){
            k=q=0;
            aa[i]=0,qq[k+q++]=i;
            while(q>0){
                int i=qq[k++];
                q--;
                for(j=0;j<n;j++)
                if(i!=j&&!adj[i][j]){
                    if(aa[j]==-1)
                    aa[j]=aa[i]^1,qq[k+q++]=j;
                else if(aa[i]==aa[j])
                    no=1;
            }
        }
    }
    printf("%s\n",no==0?"YES":"NO");
    }
	return 0;
}
