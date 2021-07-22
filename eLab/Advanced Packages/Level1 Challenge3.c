#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void h(){
 printf("dis=(int*)malloc(sizeof(int)*n);");
}
int main(){
 int n,i,j,min=100000,*a;
 scanf("%d",&n);
 a=(int*)malloc(sizeof(int)*n);
 for(i = 0; i < n; i++){
 scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++){
 for(j=i+1;j<n;j++)
 if(a[i]==a[j] && j-i<min)
 min=j-i;
 }
 if(min==100000)
 min=-1;
 printf("%d",min);
 return 0;
}
