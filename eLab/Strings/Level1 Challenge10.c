#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char S[100000];
        scanf("%s",S);
        char C[26]={0};
        int x,i,X[26];
        for(i=0;S[i]!='\0';i++){
            x=S[i]-'a';
            C[x]++;
        }
        int count=0,j=0;
        for(i=0;i<26;i++){
            if(C[i]!=0){
                X[j]=C[i];
                count++;
                j++;}
        }
        if(count<3){
            printf("Dynamic\n");
            continue;}
        int round,temp,flag;
        for(round=1;round<=count-1;round++)
        {
            flag=0;
            for(i=0;i<=count-1-round;i++)
            {
                if(X[i]>X[i+1])
                {
                    flag=1;
                    temp=X[i];
                    X[i]=X[i+1];
                    X[i+1]=temp;
                }
            }
            if(flag==0)
            break;
        }
        int y=0;
        for(i=count-1;i<count;i++)
        {
            if(X[i]!=X[i-1]+X[i-2])
            {
                y=1;
                break;
            }
        }
        if(y==1)
        {
            printf("Not\n");
            flag=1;
        }
        else
        printf("Dynamic\n");}
      return 0;}
