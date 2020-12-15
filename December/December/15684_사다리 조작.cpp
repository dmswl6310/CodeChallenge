#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, M, H;
	cin >> N >> M >> H;
	vector <vector<bool>>ladder(H+1, vector<bool>(N));
	for (int i = 0; i < M; i++) {
		int row, col;
		cin >> row >> col;
		ladder[row][col] = true;
	}


}
void backTracking(vector<vector<bool>> ladder,int row,int col) {

	isPossible()
}