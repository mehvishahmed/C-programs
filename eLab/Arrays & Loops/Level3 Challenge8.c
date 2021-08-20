#include <stdio.h>
int main()
{
    int arr[100000];
    int t,n,v,s=0,sum=-9999;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&n,&v);
        int i,j;
        for(i = 0;i < n; i++)
            scanf("%d",&arr[i]);
        for(i = 0; i < n-v+1; i++ ){
            for(j = i; j <i+v ; j++)
                s=s+arr[j];
            if(sum<s)
                sum=s;
            s=0;
        }
        printf("%d\n",sum);
        sum=-99999;
        s=0;
        t--;
    }
	return 0;
}
