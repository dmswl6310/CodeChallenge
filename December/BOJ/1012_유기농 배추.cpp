#include <iostream>
#include <stack>
using namespace std;
int countW(stack <pair<int, int>> st, bool map[][]);

int main() {
	int T,M, N, K;
	cin >> T;
	for (int i = 0; i < T) {
		int row, col;
		cin >> M >> N >> K;
		stack <pair<int, int>> st;
		bool map[50][50] = { 0, };
		for (int j = 0; j < k; j++) {
			cin >> col >> row;
			map[row][col] = true;
			st.push({ row,col });
		}
		cout << countW(st,map)
	}


}

int countW(stack <pair<int,int>> st,bool map[][]) {
	int count = 0;
	bool visit[50][50] = { 0, };
	while (!st.empty()) {
		int row = st.top().first;
		int col = st.top().second;
		st.pop();
		if (visit[row][col] == false) {
			count++;
			visit[row][col] = true;
			if (map[row + 1][col] == true && visit[row + 1][col] == false) st.push({ row + 1,col });
			if (map[row - 1][col] == true && visit[row - 1][col] == false) st.push({ row - 1,col });
			if (map[row][col+1] == true && visit[row][col+1] == false) st.push({ row,col+1 });
			if (map[row][col-1] == true && visit[row][col-1] == false) st.push({ row,col-1 });
			
		}
	}
	return count;
}