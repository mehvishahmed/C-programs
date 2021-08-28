#include<stdio.h>
long long int inv;
void d(){}
union hify
{
    int t;
};
long long int mergeSort(long long int arr[], long long int a, long long int mid, long long int b, long long int n)
{
    union hify hi;
    if(0)
        printf("%d",hi.t=1);
	long long int l[n], r[n], i, j, k, n1, n2;
	k = 0;
	for(i=a; i<=mid; i++)
		l[k++] = arr[i];
	n1 = k;
	k = 0;
	for(j=mid+1; j<=b; j++)
		r[k++] = arr[j];
	n2 = k;
	i = 0; j = 0; k = a;
	while(i<n1 && j<n2)
	{
		if(l[i] <= r[j])
		{
			arr[k] = l[i];
			i++;
		}
		else
		{
			arr[k] = r[j];
			j++;
			inv = inv + n1 - i;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k] = l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k] = r[j];
		j++;
		k++;
	}
	return 0;
}
long long int merge(long long int arr[], long long int a, long long int b, long long int n)
{
	if(a < b)
	{
		long long int mid = a + (b - a)/2;
		merge(arr,a,mid,n);
		merge(arr,mid+1,b,n);
		mergeSort(arr,a,mid,b,n);
	}
	return 0;
}
int main()
{
	long long int t, n, k, i, s, j;
	scanf("%lld", &t);
	j = 1;
	while(j <= t)
	{
		scanf("%lld%lld", &n, &k);
		long long int arr[n+1], arc[n+1];
		for(i=0; i<n; i++)
			scanf("%lld", &arr[i]);
		for(i=0; i<n; i++)
			arc[i] = arr[i];
		inv = 0;
		s = 0;
		merge(arc,0,n-1,n);
		for(i=0; i<n-1; i++)
		{
			if(arc[i] == arc[i+1])
			{
				s = 1;
				break;
			}	
		}	
		long long int no_inv = 0;
		if(inv < k)
		{
			if(s == 0)
			{
				if((k-inv) %2 ==0)
					no_inv = 0;
				else
					no_inv = 1;
			}
			else
				no_inv = 0;	
		}
		else
			no_inv = inv - k;
		printf("Case%lld:%lld\n",j,no_inv);
		j++;
	}
	return 0;
}
