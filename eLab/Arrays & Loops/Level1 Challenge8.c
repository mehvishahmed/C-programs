#include <stdio.h>
int main()
{
    int t,n,m,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d",&n, &m, &k);
        if((m>n && k>= (m-n)) || (n>m && k>= (n-m)))
            printf("0\n");
        else if(n>m && k<(n-m))
            printf("%d\n",n-(m+k));
        else
            printf("%d",m-(n+k));
    }
	  return 0;
}
