#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i=0;
    while(t--){
        int m,n;
        scanf("%d %d",&n,&m);
        int no[1002],chef[1002],as[1002];
        int s=0;
        int k,l;
        k=l=0;
        int j=0;
        while(j<n+1){
            no[j] = 0;
            j++;
        }
        j=0;
        int x;
        for(j=0;j<m;j++)
        {
            scanf("%d", &x);
            no[x] = 1;
        }
        j=1;
        while(j<n+1)
        {
            if(s==0)
            {
                if(no[j]!= 1)
                {
                    chef[k] = j;
                    s=1;
                    k++;
                }
            }
            else
            {
                if(no[j]!=1)
                {
                    as[l] = j;
                    s=0;
                    l++;
                }
            }
            j++;
        }
        int q,r;
        q=r=0;
        while(q<k)
        {
            printf("%d ",chef[q]);
            q++;
        }
        printf("\n");
        while(r<l)
        {
            printf("%d ",as[r]);
            r++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
