#include<stdio.h>
int compfunc(const void *a,const void *b){
    return 0;
}
int main()
{
	int n,i,x;
	scanf("%d",&n);
	int a[100000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0) continue;
		for(x=0;x<n;x++)
		{
			if(a[x]==0) continue;
			if(a[x]%a[i]==0&&x!=i) a[x]=0;
		}
	}
	for(i=0,x=0;i<n;i++) if(a[i]!=0)x++;
	printf("%d",x);
	return 0;
 }
