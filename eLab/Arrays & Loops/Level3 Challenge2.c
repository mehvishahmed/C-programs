#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int no[100],fs[100];
        int n,m,i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&no[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&fs[i]);
        int count=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(fs[i]==no[j])
                count++;
            }
        }
        if(count==m)
            printf("Yes\n");
        else
            printf("No\n");
    }
	return 0;
}
