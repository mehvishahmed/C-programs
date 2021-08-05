#include <stdio.h>
int NccCells(int x,int y){
    int package;
    package=((x+1)/2)*((y+1)/2);
    return package;
}
int main(){
    int G,N;
    scanf("%d %d",&G,&N);
    int package;
    package=NccCells(G,N);
    printf("%d",package);
	return 0;
}
