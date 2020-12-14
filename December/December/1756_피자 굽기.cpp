#include <iostream>
#include <vector>
using namespace std;
int realFunc(int D, int N);

vector<int> oven;
vector<int> dough;

int main() {
	int D, N;
	cin >> D >> N;
	s
	for (int i = 0; i < D; i++) {
		int tmp;
		cin >> tmp;
		oven.push_back(min(tmp,oven[i-1]));

	}
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		dough.push_back(tmp);
	}
	cout << realFunc(D, N);
}

int realFunc(int D, int N) {
	
}