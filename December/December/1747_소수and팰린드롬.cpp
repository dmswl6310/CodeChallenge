#include <iostream>
#include <string>
using namespace std;
bool nums[1000001] = { 0, };
bool isPalindrome(int x);
int main() {
	int N;
	cin >> N;
	if (N >= 1000000) {
		cout << 1003001;
		return 0;
	}
	nums[0] = nums[1] = true;
	for (int i = 2; i < N;i++) {
		if (nums[i] == true) continue;
		for (int j = i + i; j <= 1000000; j += i) nums[j] = true;
	}
	int num = N-1;
	while (++num<=1000000) {
		//�̹� �Ҽ� �ƴϸ� �н�
		if (nums[num] == true) continue;
		//�Ҽ��ε� �Ӹ���� �̸� ����
		if (isPalindrome(num)) {
			cout << num;
			return 0;
		}
		//�Ҽ��ε� �Ӹ���� �ƴϸ� ü�� �ɷ���
		for (int j = num + num; j <= 1000000; j += num) nums[j] = true;

	}
	cout << 1003001;
}
bool isPalindrome(int x) {
	string s = to_string(x);
	int k = s.size();
	for (int i = 0; i < (k/2); i++) {
		if (s[i] != s[k - 1 - i]) return false;
	}
	return true;
}