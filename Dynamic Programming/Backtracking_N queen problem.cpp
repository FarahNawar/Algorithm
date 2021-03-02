#include<stdio.h>
#include<iostream>
#define N 4
using namespace std;

void printSolution(int board[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf(" %d "board[i][j]);
        printf("\n");
    }
}

bool isSafe(int board[N][N],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        if(board[row][i])
            return false;
    }

    for(int i=row,int j=col;i>=0 &&j>=0;i--,j--)
    {
        if(board[i][j])
            return false;
    }

    for(int i=row,int j=col;j>=0&&i<N;i++,j--)
    {
        if(board[i][j])
            return false;
    }
    return true;
}


