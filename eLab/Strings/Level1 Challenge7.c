#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char pali[500];
        int i,n,flag=0;
        scanf("%s",pali);
        n=strlen(pali);
        for(i=0;i<n/2;i++){
            if(pali[i]=='.'||pali[n-i-1]=='.'){
                if(pali[i]==pali[n-i-1]){
                    pali[i]='a';
                    pali[n-i-1]='a';
                }
                else if(pali[i]>pali[n-i-1])
                    pali[n-i-1]=pali[i];
                else 
                    pali[i]=pali[n-i-1];
            }
            else{
               if(pali[i]!=pali[n-i-1]){
                   flag=1;
                   break;
               } 
            }
        }
        if(flag==0&&n%2==1){
            if(pali[n/2]=='.')
            pali[n/2]='a';
        }
        if(flag)
            printf("-1\n");
        else
            printf("%s\n",pali);
    }
	return 0;
}
