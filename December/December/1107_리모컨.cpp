#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	//�ȵǴ¹�ư �Ǵ¹�ư ǥ�ù迭
	vector <bool>buttons(10, true);
	//������ �ٲ�ߵǴ� ��ư
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
	
	//100���� ����
	int min = abs(N - 100);
	//�������� ū���� ����������
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
	//�������� �������� ����ū��

}