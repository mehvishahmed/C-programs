#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int A[100][100];
int height,width;
int small(int x, int y){
    if (x < y) return(x);
    return(y);
}
int f(int x){
    return(4*x+2);}
int g(int i, int j){
    int term1,term2;
    if (i == 0) term1=0;
    else term1=small(A[i-1][j],A[i][j]);
    if (j == 0) term2=0;
    else term2=small(A[i][j-1],A[i][j]);
    return(2*(term1+term2));
}
int main(){
    int i,j,result; 
    scanf("%i %i", &height, &width);
    for (i = 0; i < height; ++i){
        for (j = 0; j < width; ++j)
            scanf("%i",&A[i][j]);}
    result=0;
    for (i=0;i<height;++i){
        for (j=0;j<width;++j){
            result+=f(A[i][j]);
            result-=g(i,j);
        }
    }
    printf("%d\n", result);
    return 0;}
