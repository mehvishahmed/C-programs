#include <stdio.h>
typedef struct node
{
	long int start;
	long int end;
	long long int wt;
}Node;
long int label[100010];
long int size[100010];
Node edge[100010];
Node ta[100010];
void swap(long int s,long int e )
{
	Node temp=edge[e];
	edge[e]=edge[s];
	edge[s]=temp;
}
void sort(long int s,long int e)
{
	long int m=(s+e)/2;
	long int count=s;
	long int i=s,j=m+1;
	while(i<=m && j<=e && count<=e)
	{
		if(edge[i].wt > edge[j].wt)
		{
			ta[count]=edge[j];
			count++;
			j++;
		}
		else
		{
			ta[count]=edge[i];
			count++;
			i++;
		}
	}
	if(i>m)
	{
		while(j<=e && count<=e)
		{
			ta[count]=edge[j];
			j++;
			count++;
		}
	}
	if(j>e)
	{
		while(i<=m && count<=e)
		{
			ta[count]=edge[i];
			i++;
			count++;
		}
	}
	long int k;
	for(k=s;k<=e;k++)
    	edge[k]=ta[k];
}
void ms(long int s,long int e)
{
	if(e==s)
	    {}
	else if(e-s==1)
	{
		if(edge[s].wt>edge[e].wt)
			swap(s,e);
	}
	else
	{
		ms(s,(s+e)/2);
		ms((s+e)/2+1,e);
		sort(s,e);
	}
}
long int find(long int a)
{
	if(label[a] == a)
		return a ;
	else
	{
		label[a] = find(label[a]) ;
		return label[a] ;
	}
}
int main(void) 
{
	long long int ans = 0 ;
	long int n,i;
	scanf("%ld",&n);
	long long int temp = 0 ;
	for(i=0;i<n-1;i++)
		scanf("%ld%ld%lld",&edge[i].start,&edge[i].end,&edge[i].wt);
	ms(0,n-2);
	for(i=1;i<=n;i++)
		label[i] = i ;
	for(i=1;i<=n;i++)
		size[i] = 1 ;
	long long int answer=0;
	long int x,y ;
	for(i=0;i<=n-2;i++)
	{
		x = find(edge[i].start) ;
		y = find(edge[i].end) ;
		ans = ans + (long long int)((long long int)size[x] *(long long int)size[y] * (long long int)edge[i].wt) ;
		answer = answer + edge[i].wt;
		temp = temp + (long long int)size[x] * (long long int)size[y] ;
		if(size[x] >= size[y])
		{
			label[y] = x ;
			size[x] = size[x] + size[y] ; 
		}
		else
		{
			label[x] = y ;
			size[y] = size[y] + size[x] ;
		}
	}
	long double final_ans = (long double)answer - (long double)((long double)(ans)/(long double)temp);
	printf("%Lf\n",final_ans);
	return 0;
}
