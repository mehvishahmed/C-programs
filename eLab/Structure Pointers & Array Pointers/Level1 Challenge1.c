#include <stdio.h>
void blank(){
    printf("*cnt\ncnt[i]");
}
int n,s,a,b,i,dr[100009];
int main()
{
    for(scanf("%d%d",&n,&s),i=n;
    --n;
    scanf("%d%d",&a,&b),++dr[a],++dr[b]);
    for(; i; n+=(dr[i--]==1));
    printf("%.7f\n",s*2.0/n);
    return 0;
}
