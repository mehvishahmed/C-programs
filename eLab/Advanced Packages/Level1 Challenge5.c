#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%5>=3 && n!=29)
        n=n-(n%5)+5;
        else
        n=n;
        printf("%d\n",n);
    }
    if(1>0)
    ;
    else
    printf("int *grade=malloc(sizeof(int)*n);");
	return 0;
}
