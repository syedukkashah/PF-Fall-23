//Programmer: Syed Ukkashah
//Description: Using 2d arrays and recursion to traverse a maze from top left to bottom right
//Date: 28th October 2023
#include <stdio.h>
#include<stdbool.h> //stdbool header file contains bool data types
#define N 5
#define M 5
//#define allows defintion of macros
bool checkpath(int n, char arr[n][n], int sol[n][n], int x, int y){ //bool return type function that checks if there is a valid path (index should not have 'W), function takes size, maze char array, solution integer array, and indexes as arguments
	if(x<0 || y<0 || arr[x][y]=='W'||sol[x][y]==1||x>=n||y>=n){ //base case
		return false;
	}
	return true;
}
bool traversal(int n, char arr[n][n], int sol[n][n], int x, int y){ //bool return type function that traverse the maze according to constraints. Function takes size, maze char array, solution integer array, and indexes as arguments
	if(arr[x][y]=='E'){ //condition return true if E has been reached
		sol[x][y]=1;
		return true;
	}
	if(checkpath(n, arr, sol, x, y)){ //control goes inside of if brackets if checkpath return true
		sol[x][y]=1; // solution array initialized with 1 at index if there a valid path index in maze
		if(traversal(n,arr,sol,x+1,y)){ //recursive call of traversal function (downwards check)
			sol[x+1][y]=1; // solution array index initialized with 1
			return true;
		}
		if(traversal(n,arr,sol,x,y+1)){ //recursive call of traversal function (rightwards check)
			sol[x][y+1]=1; // solution array index initialized with 1
			return true;
		}
		sol[x][y]=0; //backtracking if no path is found
		return false;
	}
} //function closed
int main(){
	char maze[N][M] = { // initialization of maze
 {'S', 'O', 'O', 'W', 'W'},
 {'O', 'W', 'O', 'O', 'W'},
 {'O', 'O', 'O', 'W', 'O'},
 {'W', 'W', 'O', 'W', 'O'},
 {'W', 'W', 'O', 'E', 'W'} };
 int solution_array[5][5];//defining solution array
 for(int i=0; i<5; i++){
 	for(int j=0; j<5; j++){
 		solution_array[i][j]=0; // initializing solution array to 0 to get rid of garbage values
	}
 }
 traversal(N, maze, solution_array, 0, 0); //traversal function called
 for(int i=0; i<5; i++){
 	for(int j=0; j<5; j++){
 		if(solution_array[i][j]==1){
 			printf("(%d,%d) ", i, j); //prints indexes that have 1 stored in the solution array
		 }
	 }
 }
}
