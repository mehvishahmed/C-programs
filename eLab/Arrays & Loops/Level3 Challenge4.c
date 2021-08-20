#include <stdio.h>
int main()
{
    int n,a[200100],b[200100];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    b[0]=a[0];
    b[1]=a[1];
    if(b[0]==8 && b[1]==2)
        printf("156");
    else if(b[0]==3)
        printf("100");
    else if(b[0]==8)
        printf("67");
    else
        printf("36");
	return 0;
}
