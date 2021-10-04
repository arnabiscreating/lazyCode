N-Queens Problem
N - Queens problem is to place n - queens in such a manner on an n x n chessboard that no queens attack each other by being in the same row, column or diagonal.

It can be seen that for n =1, the problem has a trivial solution, and no solution exists for n =2 and n =3. So first we will consider the 4 queens problem and then generate it to n - queens problem.

Given a 4 x 4 chessboard and number the rows and column of the chessboard 1 through 4.

Language: C++

Question Platform: Leetcode

Solution of the nQueensProblem

#include<iostream>
using namespace std;
bool isSafe(int** arr, int x, int y, int n){
	for(int row=0; row<x; row++){
		if(arr[row][y]==1)
			return false;
	}
	int row=x;
	int col= y;
	
	while(row>=0 &&col>=0){
		if(arr[row][col]== 1){
			return false;
		}
		row--;
		col--;
	}
	row=x;
	col= y;
	
	while(row>=0 &&col<n){
		if(arr[row][col]== 1){
			return false;
		}
		row--;
		col++;
	}
	return true; 
}
bool nQueen(int** arr, int x, int n){
	// we have placed the queen if this condition satisfies.
	if(x>=n){
		return true;
	}
	for(int col=0; col<n; col++){
		if(isSafe(arr, x, col, n)){
			arr[x][col] = 1;
			
		if(nQueen(arr, x+1, n)){
			return true;
		}
		arr[x][col] = 0; //backtracking
		}
	}
	return false;
}
int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	
	int **arr = new int *[n];
	for(int i=0; i<n; i++){
		arr[i] = new int[n];
		for(int j=0; j<n; j++){
			arr[i][j] = 0;
		}
	}
if(nQueen(arr, 0, n)){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	return 0;
}
