#include <stdio.h>
#define N 100000
int good(int n,int *kk){
    int c,k;
    k=0;
    for(c=0;c<52;c++)
        if(kk[c]>0)
    k++;
    return k==n;
}
int f(char c){
    return c >='a'&& c<='z'?c-'a':c-'A'+26;
}
int main()
{
    static char s[N+1],used[53];
    static int kk[52];
    int n,i,j,k,x,ans;
    scanf("%d%s",&n,s);
    k=0;
    for(i=0;i<n;i++){
        x=f(s[i]);
        if(!used[x]){
            k++;
            used[x]=1;
        }
    }
    ans=n+1;
    for(i=j=0;i<n;i++){
        while(j<n&&!good(k,kk))
            kk[f(s[j++])]++;
        if(good(k,kk)&&ans>j-i)
            ans=j-i;
        kk[f(s[i])]--;
        
    }
    printf("%d\n",ans);
	  return 0;
}
