// C++ Program to count islands in boolean 2D matrix 
#include <bits/stdc++.h> 
using namespace std; 

#define ROW 5 
#define COL 5 
const int row[]={0,0,1,1,-1,1,-1,-1};
const int col[]={1,-1,-1,1,1,0,0,-1};
// A function to check if a given 
// cell (row, col) can be included in DFS 
int isSafe(int M[][COL], int row, int col, 
		bool visited[][COL]) 
{ 
	// row number is in range, column 
	// number is in range and value is 1 
	// and not yet visited 
	return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (M[row][col] && !visited[row][col]); 
} 

// A utility function to do DFS for a 
// 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void dfs(int M[][COL],int i,int j,bool visited[][COL])
{
	visited[i][j]=true;

	for(int k=0;k<8;k++)
	{
       if(isSafe(M,i+row[k],j+col[k],visited))
	   dfs(M,i+row[k],j+col[k],visited);
	}
}
// The main function that returns 
// count of islands in a given boolean 
// 2D matrix 
int countIslands(int M[][COL]) 
{ 
	// Make a bool array to mark visited cells. 
	// Initially all cells are unvisited 
	bool visited[ROW][COL]; 
	memset(visited, 0, sizeof(visited)); 

	// Initialize count as 0 and 
	// travese through the all cells of 
	// given matrix 
	int count = 0; 
	for (int i = 0; i < ROW; ++i) 
		for (int j = 0; j < COL; ++j) 

			// If a cell with value 1 is not 
			if (M[i][j] && !visited[i][j]) { 
				// visited yet, then new island found 
				// Visit all cells in this island. 
				dfs(M, i, j, visited); 

				// and increment island count 
				++count; 
			} 

	return count; 
} 

// Driver code 
int main() 
{ 
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
	int M[][COL] = { { 1, 0, 0, 0, 0 }, 
					{ 0, 0, 0, 0, 1 }, 
					{ 1, 0, 0, 1, 1 }, 
					{ 0, 0, 0, 0, 0 }, 
					{ 1, 0, 1, 0, 1 } }; 

	cout << "Number of islands is: " << countIslands(M); 

	return 0; 
} 

// This is code is contributed by rathbhupendra 
