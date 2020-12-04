#include <iostream>
#include<cmath>
using namespace std;
int order(int N, int strow, int stcol, int r, int c);
int main4() {
	int N, r, c;
	cin >> N >> r >> c;
	cout << order(pow(2, N), 0, 0, r, c);
	return 0;
}

int order(int N, int strow, int stcol, int r, int c) {
	if (strow == r && stcol == c) {
		return 0;
	}
	int total = 0;
	int half = N / 2;
	if (r >= strow + half) {
		if (c >= stcol + half) {
			total += half * half * 3 + order(half, strow + half, stcol + half, r, c);
		}
		else {
			total += N * half + order(half, strow + half, stcol, r, c);
		}
	}
	else {
		if (c >= stcol + half) {
			total += half * half + order(half, strow, stcol + half, r, c);
		}
		else {
			total += order(half, strow, stcol, r, c);
		}
	}
	return total;
}