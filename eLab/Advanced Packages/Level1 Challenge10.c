#include <stdio.h>
#include <stdlib.h>
void l(){}
int main()
{
 int q,x,y,z,*ans;
 q=0;
 ans=(int *)malloc(q*sizeof(int));
 *ans=0;
 int t;
 scanf("%d",&t);
 while(t--)
 {
 scanf("%d %d %d",&x,&y,&z);
 if((abs(x-z)>abs(y-z))) printf("Lion B\n");
 else if(abs(x-z)<abs(y-z)) printf("Lion A\n");
 else printf("Hyena C\n");
 }
return 0;
}
