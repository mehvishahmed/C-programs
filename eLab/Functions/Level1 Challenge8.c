#include <stdio.h>
#include <string.h>
int checkPali(int);
int n,t,rem,r=0;
int main(){
    scanf("%d",&n);
    checkPali(n)==0?printf("YES"):printf("NO");
	return 0;
}
int checkPali(int n)
{
    t=n;
    while(n!=0){
        r=r*10+n%10;
        n/=10;
    }
    if(r==t)
        return 0;
    else
        return 1;
}
