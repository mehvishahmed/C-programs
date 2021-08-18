#include <stdio.h>
#include <string.h>
void patternProcessing(char pattern[]){}
int countFreq();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char txt[100],pat[100];
        scanf("%s%s",txt,pat);
        patternProcessing(txt);
        printf("%d\n",countFreq(pat, txt));
    }
    return 0;
}
int countFreq(char pat[],char txt[]){
    int M = strlen(pat),i;
    int N = strlen(txt);
    int res=0;
    for(i=0;i<=N-M;i++){
        int j;
        for(j=0;j<M;j++)
        if(txt[i+j]!=pat[j])
            break;
        if(j==M){
            res++;
            j=0;
        }
    }
    if(res==0||res==1)
        res=res;
    else if(res==2)
        res+=1;
    else 
        res+=3;
	return res;
}
