#include <stdbool.h>
#include <stdio.h>
int a;
bool isSafe(int board[a][a], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < a; i++, j--)
        if (board[i][j])
            return false;
    return true;
}
bool solveNQUtil(int board[a][a], int col)
{ 
    int i;
    if (col >= a)
        return true;
    for (i = 0; i < a; i++){
        if (isSafe(board, i, col)){
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    } 
    return false;
}
bool solveNQ()
{ 
    int board[a][a],i,j;
    for(i=0;i<a;i++)
    for(j=0;j<a;j++)
    board[i][j]=0;
    if (solveNQUtil(board, 0) == false){
        printf("Not possible");
    return false;}
    else{
        for ( i = 0; i < a; i++){
            for ( j = 0; j < a; j++)
                printf("%d ",board[j][i]);
                printf("\n");
        }
    }
    return true;
}
int main()
{ 
    scanf("%d",&a);
    solveNQ();
    return 0;
}
