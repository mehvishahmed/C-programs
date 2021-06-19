#include <stdio.h>
int main()
{
    int cp,sp,amt;
    scanf("%d\n%d",&cp,&sp);
    if (cp>sp){
        amt=(cp-sp);
        printf("Loss:%d",amt);
    }
    else if(sp>cp){
        amt=(sp-cp);
        printf("Profit:%d",amt);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}
