#include <stdio.h>
void bubble(int a[],int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,l;
        scanf("%d %d",&n,&l);
        int a[n][2];
        int i,j;
        for(i=0;i<n;i++)
        {
        	for(j=0;j<2;j++)
        	    scanf("%d",&a[i][j]);
        }
        int flag=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
          	{
          	    if(a[j][1]-a[i][0]==l&&a[j][0]>=a[i][0]&&a[i][1]<=a[j][1])
          	    {
          	       	flag++;
          	       	break;
                 }
          	}
        }
        if(flag==0)
            printf("No\n");
        else 
            printf("Yes\n");
        t--;
    }
    return 0;
}
