#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    while(a--)
    {
        long int n,temp,result=0;
        long int *elements;
        scanf("%li",&n);
        elements =calloc(2*n+1,sizeof(int*));
        for(i=0;i<n;i++){
            scanf("%li",&temp);
            if(temp>2*n)
                ++result;
            else
                ++elements[temp];
        }
        long int*arr1,*arr2 = NULL;
        arr1=calloc((2*n)+1,sizeof(long int));
        for(i=1;i<=(2*n);i++){
            arr2=calloc(2*n/i+1,sizeof(long int));
            for(j=0;j<=(2*n/i);j++)
                arr2[j]=arr1[j]+fabs(elements[i]-j);
            for(j=(2*n/i)-1;j>=0;j--)
                arr2[j]=(arr2[j]<arr2[j+1])?arr2[j]:arr2[j+1];
            arr1=arr2;
        }
        result+=(arr2[0]<arr2[1])?arr2[0]:arr2[1];
        printf("%li\n",result);
    }
	  return 0;
}
