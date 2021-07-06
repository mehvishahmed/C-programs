#include <stdio.h>
int i,flag=1;
void prime(char str[9]){
    for(i=0;i<8;i++){
        if(str[2]=='B') goto print; int sum=0;
        sum=str[i]+str[i+1];
        if(sum%2!=0) flag=0;}
    print: if(flag==1) printf("Allowed"); 
    else if(flag==0) printf("Arrest");}
int main(){
    char tag[9];
    scanf("%s",tag);
    if(tag[2]=='E') flag=0;
    if(flag==1) prime(tag);
    else printf("Arrest");
	return 0;}
