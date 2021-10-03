#include<stdio.h>
#include<string.h>
int main()
{
    char *p="RGB", *q="GBR", *r="BRG", a[200010];
    int n, k, i, j, t, x[200010], y[200010], z[200010], m, d1, d2, s, d3;
    scanf("%d", &t);
    while(t--)
    {
    	scanf("%d%d", &n, &k);
    	scanf("%s", a);
    	for (i=0; i<n; i++){
    		if (a[i]!=p[i%3])
    			x[i+1]=(x[i]+1);
    		else
    			x[i+1]=(x[i]);
    		if (a[i]!=q[i%3])
    			y[i+1]=(y[i]+1);
    		else
    			y[i+1]=(y[i]);
    		if (a[i]!=r[i%3])
    			z[i+1]=(z[i]+1);
    		else
    			z[i+1]=(z[i]);
    	}
    	j=0;
    	m=k;
    	s=k;
    	if (m>0)
    	{
    		while (s<=n){
    			d1=x[s]-x[j];
    			d2=y[s]-y[j];
    			d3=z[s]-z[j];
    			if (d1<m)
    				m=d1;
    			if (d2<m)
    				m=d2;
    			if (d3<m)
    				m=d3;
    			j++;
    			s++;
    		}
    	}
    	printf("%d\n", m);
	}
	return 0;
}
