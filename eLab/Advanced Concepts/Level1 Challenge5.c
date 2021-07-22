#include <stdio.h>
#define mod 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    long long unsigned int x,y;
    scanf("%llu %llu",&x,&y);
    int a=x;
  //  int sum=x;
    int i;
    for(i=0;i<y-1;i++){
        x=(a*x)%mod;
       // sum=(sum+x)%mod;
    }
    printf("%llu\n",x);}
    
    

	return 0;
}
