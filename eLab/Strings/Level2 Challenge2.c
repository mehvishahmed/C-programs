#include <stdio.h>
#include <string.h>
int main()
{
    int fall, i, l, p, j;
    char a[100],b[4][100];
    for(scanf("%d",&fall); fall--; puts((p==-1)?"No solution":((p==-2)?"Multiple solutions":b[p])))
    {
    	for(scanf("%s",a),i=!(l=strlen(a));i++<l; a[i-1]-=48);
    	for(i=!(p=-1); i<4; p=(a[0]==(b[i][0]^b[i][1]^b[i][l-1])&&a[l-1]==(b[i][l-1]^b[i][l-2]^b[i][0])&&p==-1)?i:((a[0]==(b[i][0]^b[i][1]^b[i][l-1])&&a[l-1]==(b[i][l-1]^b[i][l-2]^b[i][0]))?-2:p), i++)
    	for(b[i][0]=i&1, b[i][1]=i>>(j=1); j++<l-1; b[i][j]=b[i][j-1]^b[i][j-2]^a[j-1]);
    	for(i=b[p][l]=0; i++<l; b[p][i-1]+=48);
    }
    return 0;
}
