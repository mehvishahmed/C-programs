#include <stdio.h>
int main()
{ 
    int t,num,i,upto,x;
    scanf("%d",&t);
    while(t--)
    {
        char arr[1000000],temp;
        scanf("%d %s",&num,arr);
        if(num%2==0)
            upto=num;
        else
            upto=num-1;
        for(i=0;i<upto;i=i+2)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        for(i=0;i<num;i++)
        {
            x=((int)arr[i])-97;
            arr[i]=(char)(122-x);
            printf("%c",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
