#include <stdio.h>
#include <string.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int len,i;
        char N[100001];
        scanf("%s",N);
        len = strlen(N);
        int flag =1;
        for(i=0;i<len;i++){
            if(N[i]=='E' && N[i+1]=='C')
                flag=0;
            else if(N[i]=='S' && N[i+1]=='C')
                flag =0;
            else if(N[i]=='S' && N[i+1]=='E')
                flag =0;
        }
        (flag==0)?printf("no\n"):printf("yes\n");    
    }
	return 0;
}
