#include <stdio.h>
int countD(char *digits,int n){
    int i=1,c=1,p=1,num;
    while(digits[i]!='\0')
    {
        num = (digits[i-1]-'0')*10+digits[i]-'0';
        if(num<=26 && digits[i] != '0' && digits[i-1] != '0')
            n=c+p;
        else n=c;
        p=c;
        c=n;
        i++;
    }
    printf("%d",n); 
    return 0;  
}
int main() 
{
    char s[100];
    scanf("%s",s);
    countD(s,1);
    return 0;
}
