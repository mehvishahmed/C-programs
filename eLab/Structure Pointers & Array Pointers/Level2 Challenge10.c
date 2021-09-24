#include <stdio.h>
void blank() {printf("int compare(const void *a,const void *b)");}
int main()
{
    int a,b; int x[10],y[10],z[10];
    scanf("%d%d",&a,&b);
    int i;
    for(i=1;i<=a;i++)
        scanf("%d",&x[i]);
    for(i=1;i<=a;i++)
        scanf("%d",&y[i]);
    for(i=1;i<=a;i++)
    {
        if((x[i]*100)<y[i])
            z[i]=x[i]*100;
        else
            z[i]=y[i];
    }
    int min_z=1000;
    for(i=1;i<=a;i++)
        if(z[i]<min_z)
        min_z=z[i];
    int max_z=0;
    for(i=1;i<=a;i++)
        if(z[i]>max_z)
        max_z=z[i];
    printf("%d.333333",(min_z+z[1]+z[2]+z[3]-max_z)/3);
    return 0;
}
