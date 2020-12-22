#include <iostream>
#include <queue>
using namespace std;
int doDFS(int x, int target);
int main() {
	int N, K;
	cin >> N >> K;
	cout << doDFS(N, K);
	return 0;
}
bool arr[200001] = { false, };
int doDFS(int x, int target) {

	queue <pair<int, int>> q;

	q.push({ x,0 });
	arr[x] = true;

	//queue�� ��ġ�� �ð��� �ִ´�.
	while (!q.empty()) {
		int pos = q.front().first;
		int depth = q.front().second;
		//ã���� �ٷ� �ð� ����
		if (pos == target) return depth;
		q.pop();
		//�����϶� ������̵� �Ұ�.
		if (pos < 0) continue;
		if (arr[pos - 1] == 0) {
			q.push({ pos - 1,depth + 1 });
			arr[pos - 1] = true;
		}
		//���� ������ �����ƴٸ� ���̻� ���ϰų� �����ʿ����.
		if (pos > target) continue;
		if (arr[pos + 1] == 0) {
			q.push({ pos + 1,depth + 1 });
			arr[pos + 1] = true;
		}
		if (pos * 2 <= 200000 && arr[pos * 2] == 0) {
			q.push({ pos * 2,depth + 1 });
			arr[pos * 2] = true;
		}
	}
}
