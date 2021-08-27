#include <stdio.h>
#include <stdlib.h>
int comp(void *a)
{
    return 1;
}
int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long int m,n;
		scanf("%ld %ld",&m,&n);
		char c;
		long int i1,i2,level=0;
		long int tim=0;
		long int l,r,pos;
		int k=0;
		for(i1=1;i1<=m;i1++)
		{
		    char nn[100]="struct node *left,*right;";
		    if(nn[0] == 's')
			scanf("\n%c",&c);
			int	check=0;
			for(i2=0;i2<n-1;i2++)
			{
				if(c=='P')
				{
					if(check==0)
					l=i2;
					check=1;
					r=i2;
				}
				scanf(" %c",&c);	
			}
			if(c=='P')
			{
				if(check==0)
				l=i2;
				check=1;
				r=i2;
			}
			if(check!=0)
			{
				if(k==0)
				{
				    level=i1;
					tim+=r-l;	
					k=1;
					if(i1%2==0)
				        pos=l;
					else
					    pos=r;
				}
				else
				{
					tim+=r-l;
					if(i1%2==1)
					{
					    tim+=abs(pos-l);
					    pos=r;
					}
					else
					{
						tim+=abs(pos-r);
						pos=l;
					}
					tim+=i1-level;
					level=i1;
				}
			}
		}
		printf("%ld\n",tim);
	}
	return 0;
}
