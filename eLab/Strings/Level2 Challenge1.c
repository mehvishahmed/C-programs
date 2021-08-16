#include <stdio.h>
#include <string.h>
int main()
{   
    int t,i,n;
    int subs,c,cnt1,count;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000001];
        subs = 0;
        c=1;
        count =0;
        scanf("%s",s);
        n = strlen(s);
        while(subs<=n){
            subs=(c*c) + c;
            if(subs <=n){
                cnt1=0;
                for(i=0;i<subs;i++){
                    if(s[i] == '1')
                    cnt1++;
                }
                if(cnt1 == c)
                    count++;
                for(i=subs;i<n;i++){
                    if(s[i-subs]=='1')
                    cnt1--;
                    if(s[i]=='1')
                    cnt1++;
                    if(cnt1==c)
                        count++;
                }
                c++;
            }
            else{
                printf("%d\n",count);
                break;
            }
        }
    }
    return 0;
}
