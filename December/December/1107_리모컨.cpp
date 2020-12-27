#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	//안되는버튼 되는버튼 표시배열
	vector <bool>buttons(10, true);
	//무조건 바꿔야되는 버튼
	vector<int>change;
	//vector<int>cha;
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		buttons[num] = false;
	}
	string temp = to_string(N);
	for(int i=0;i<temp.size();i++){
		if (buttons[(temp[i]-'0')] == false) change.push_back(i);
	}
	
	//100과의 차이
	int min = abs(N - 100);
	//목적보다 큰수중 가장작은것
	int k = 0;
	while (buttons[k] == false) k++;

	if (temp[change[0]] == '9') {
		temp[change[0]] = k-'0';

	}
	else {
		temp[change[0]]++;
	
		for (int i = 1; i < change.size(); i++) {
			temp[change[i]] = k;
		}
	}
	//목적보다 작은수중 가장큰것

}