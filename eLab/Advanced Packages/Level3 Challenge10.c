#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MXV 1000
#define MXE 500000
int results[MXV][MXV];
int label[MXV][MXV];
int group[MXV];
int input[MXE][3];
void S(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int T(int p, int r)
{
	int x=input[r][2], i=p-1, j=p, t;
	for(;j<r; j++)
		if(input[j][2]>=x)
			for(++i,t=-1; ++t<3; S(&input[i][t],&input[j][t]));
	for(t=-1; ++t<3; S(&input[i+1][t],&input[r][t]));
	return i+1;
}
void Q(int p, int r)
{
	int q;
	if(p<r)
	{
		q=T(p,r);
		Q(p,q-1);
		Q(q+1,r);
	}
}
int main()
{
	int V, E, u, v;
	int i, j, m, n;
	scanf("%d%d",&V,&E);
	for(i=0;i<E;i++)
	{
		scanf("%d%d%d",&(input[i][0]),&(input[i][1]),&(input[i][2]));
	}
	Q(0,E-1);
	for(i=0;i<V;i++)
		for(j=0;j<V;j++)
			label[i][j]=-!(results[i][j]=0);
	for(i=0;i<V;i++)
	{
		label[i][0]=i;
		group[i]=i;
	}
	for(i=0;i<E;i++)
	{
		if(group[input[i][0]]!=group[input[i][1]])
		{
			u=group[input[i][0]]<group[input[i][1]]?group[input[i][0]]:group[input[i][1]];
			v=group[input[i][0]]>group[input[i][1]]?group[input[i][0]]:group[input[i][1]];
			for(m=0;label[u][m]!=-1;m++)
			{
				for(n=0;label[v][n]!=-1;n++)
				{
					results[label[u][m]][label[v][n]]=input[i][2];
					results[label[v][n]][label[u][m]]=input[i][2];
				}
			}
			for(n=0;label[v][n]!=-1;n++,m++)
			{
				label[u][m]=label[v][n];
				group[label[v][n]]=group[label[u][0]];
			}
		}
	}
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
			printf("%d ",results[i][j]);
		printf("\n");
	}
	return 0;
}
