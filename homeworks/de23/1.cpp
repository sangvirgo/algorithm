#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
7 6
-1 -1 0 0 0 -1
-1 -1 0 0 0 0
-1 0 0 0 0 0
-1 -1 0 0 0 -1
0 0 0 0 0 -1
-1 0 -1 -1 -1 -1
-1 0 0 0 0 -1 


7 4
 0  0 -1  0 
 0 -1 -1 -1
 0  0 -1  0
 0  0  0  0 
-1  0  0  0 
 0 -1  0  0
 0  0  0  0
*/
int col, row;
vector<vector<int>> arr; 
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};

void init() {
	cin >> row >> col;
	arr.resize(row, vector<int>(col));
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
}


bool isValid(int x, int y, int row, int col) {
	return (x>=0 && x<row && y>=0 && y<col);
}

void dfs(vector<vector<int>> &a, int x, int y, int row, int col) {
	a[x][y]=0;
	for(int k=0; k<4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if(isValid(nx, ny, row, col)&&a[nx][ny]==-1) {
			dfs(a, nx, ny, row, col);
		}
	}
}

int connected(vector<vector<int>> &a, int row, int col) {
	int cnt=0;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(a[i][j]==-1) {
				dfs(a, i, j, row, col);
				cnt++;
			}
		}
	}
	return cnt;
}

void display(vector<vector<int>> &a, int row, int col) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
    /* clock_t clock(void) returns the number of clock ticks
       elapsed since the program was launched.To get the number 
       of seconds used by the CPU, you will need to divide by 
       CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical
       32 bit system.  */
    clock_t start, end;
 
    /* Recording the starting clock tick.*/
    start = clock();


	init();
	cout << connected(arr, row, col) << endl;
	display(arr, row, col);


	    // Recording the end clock tick.
    end = clock();
 
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
}