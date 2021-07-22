#include <stdio.h>
#define M 1000000007
#define data long  int
int find(int num)
{ int i,j,sum=0;
  for(i=1;i<=num;i++)
   { for(j=1;j<=num;j++)
      { if(i*j<=num)
          sum+=(i*j);
      }
   }
  return sum;
}
int main()
{ int t,num,sum;
  scanf("%d",&t);
  while(t--)
   { scanf("%d",&num);
     sum=find(num);
     printf("%d\n",sum); 
   }
	return 0;
}
