#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define T word=(char *)malloc(7*sizeof(char));
void blank(){}
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    char Ones[12][10] = {"one", "two","three","four","five","six","seven","eight","nine","ten","eleven","tweleve"};
    char Teens[15][15]={"ten","eleven","tweleve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty"};
    char Tens[15][15] = {"twenty","half","fourty","fifty","sixty","seventy","eighty","ninety"};
    if(m==0)
        printf("%s o' clock",&Ones[h-1][0]);
    if((m<10)&&(m>0)){
        if(m!=1)
            printf("%s minutes past %s",&Ones[m-1][0],&Ones[h-1][0]);
        else
            printf("%s minute past %s",&Ones[m-1][0],&Ones[h-1][0]);
    }
    if((m>10)&&(m<=20)){
        if(m!=15)
            printf("%s minutes past %s",&Teens[m-10][0],&Ones[h-1][0]);
        else
            printf("%s past %s",&Teens[m-10][0],&Ones[h-1][0]);
    }
    if((m<=30)&&(m>20)){
        if(m!=30)
            printf("%s %s minutes past %s",&Tens[(m/10)-2][0],&Ones[(m%10)-1][0],&Ones[h-1][0]);
        else
            printf("half past %s",&Ones[h-1][0]);
    }
    if((m<40)&&(m>30))
       printf("%s %s minutes to %s",&Tens[(60-m)/10-2][0],&Ones[(60-m)%10-1][0],&Ones[h][0]);
    if((m<50)&&(m>=40)){
        if(m!=45)
            printf("%s minutes to %s",&Teens[50-m][0],&Ones[h][0]);
        else
            printf("%s to %s",&Teens[50-m][0],&Ones[h][0]);
    }
    if((m<60)&&(m>=50)){
        if(m!=59)
            printf("%s minutes to %s",&Ones[59-m][0],&Ones[h][0]);
        else
            printf("%s minute to %s",&Ones[59-m][0],&Ones[h][0]);
    }
    return 0;
}
