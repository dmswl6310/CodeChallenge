#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	vector <bool>buttons(10, true);
	vector<int>change;
	vector<int>cha;
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		buttons[num] = false;
	}
	int temp = N;
	while(temp >0) {
		int k = temp % 10;
		cha.push_back(k);
		if (buttons[k] == false) change.push_back(cha.size() - 1);
		temp /= 10;
	}

	//100���� ����
	int min = abs(N - 100);
	//�������� ū���� ����������

	//�������� �������� ����ū��

}