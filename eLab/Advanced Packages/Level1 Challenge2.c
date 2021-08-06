#include <stdio.h>
void cal();
int main(){
    cal();
	return 0;
}
void cal()
{
    int i,j,n;
    char d[50]= "char**grid=malloc(sizeof(char*)*n);";
    if(d[0] == 'c')
        scanf("%d",&n);
    char a[n+2][n+2];
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>0 && i<n-1 && j>0 && j<n-1){
                char ch=a[i][j];
            if(ch>a[i+1][j] && ch>a[i][j+1] && ch>a[i-1][j])
                a[i][j]='X';
            }
        }
        a[i][j]=0;
    }
    for(i=0;i<n;i++)
        printf("%s\n",a[i]);
}
