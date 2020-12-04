#include<iostream>
using namespace std;
int main6() {
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;
		if (num > max) {
			max = num;
			maxIndex = i + 1;
		}
}
	cout << max << endl;
	cout << maxIndex;
	return 0;
}