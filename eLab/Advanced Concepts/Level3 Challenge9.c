#include <stdio.h>
extern void MaxActivities(int starttime[],int finishtime[],int n);
int main()
{
    int n,i,s[100],f[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<n;i++)
        scanf("%d",&f[i]);
    MaxActivities(s,f,n);
    return 0;
}
extern void MaxActivities(int starttime[],int finishtime[],int n)
{
    int a=0,b,count=0;
    count++;
    for(b=1;b<n;b++){
        if(starttime[b]>=finishtime[a]){
            count++;
            a=b;
        }
    }
    printf("%d",count);
}
