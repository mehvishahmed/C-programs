#include <stdio.h>
int check_armstrong(int n);
int main()
{
  int num,temp;
  int a,b;
  scanf("%d %d",&a,&b);
  for(num=a;num<=b;num++)
  {
    temp=num;
    if(check_armstrong(temp)==num)
      printf("%d ",num);
  }
  return 0;
} 
int check_armstrong(int temp)
{
   int r,sum=0;
   while(temp!=0)
   {
      r=temp % 10;
      temp=temp/10;
      sum=sum+(r*r*r);
    }
   return sum;
}
