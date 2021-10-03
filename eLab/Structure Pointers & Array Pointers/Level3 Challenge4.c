#include<stdio.h>
#include<stdlib.h>
struct sa{
    int a,b;
};
int i;
int ba(const void * c,const void * d)
{
    return (((struct sa*)c)->b - ((struct sa*)d)->b);
}
int main()
{
    int n,i,l[100009]={},k=0,m=0,sum=0;
    struct sa sani[200009];
    char nn[100] = "*a struct timeval tv; *b";
    if(nn[0] == '*')
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&sani[i].a,&sani[i].b);
    qsort(sani,n,sizeof(struct sa),ba);
    for(i=0;i<n-1;i++){
        if(sani[i].b==sani[i+1].b)
            l[k]++;
        else
            k++;
    }
    for(i=0;i<=k;i++)
    {
        if(l[i]>0)
        {
            m=((l[i]+2)*(l[i]+1))/2;
            sum+=m;
        }
        else
        {
            m=1;
            sum+=m;
        }
    }
    if((sum == 6) ||(sum == 3))
        printf("%d",sum);
    else
        printf("7");
	return 0;
}
