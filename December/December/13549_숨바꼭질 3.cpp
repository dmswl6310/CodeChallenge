#include <iostream>
#include <queue>
#include <memory>
using namespace std;
int doDFS(int x, int target);
int main() {
	int N, K;
	cin >> N >> K;
	cout << doDFS(N, K);
	return 0;
}
int arr[100001]={0, };
priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int doDFS(int x, int target) {

	pq.push({ 0,x });
	arr[x] = 0;
	//queue�� ��ġ�� �ð��� �ִ´�.
	while (!pq.empty()) {
		int depth = pq.top().first;
		int pos = pq.top().second;
		//ã���� �ٷ� �ð� ����
		if (pos == target) return depth;
		pq.pop();
		//�����϶� ������̵� �Ұ�.
		if (pos < 0) continue;
		if (pos>0 && arr[pos - 1]==0 ||arr[pos-1] > depth + 1) {
			pq.push({ depth + 1,pos - 1 });
			arr[pos - 1] = depth + 1;
		}
		//���� ������ �����ƴٸ� ���̻� ���ϰų� �����ʿ����.
		if (pos > target) continue;
		if (arr[pos + 1]==0||arr[pos+1] > depth + 1) {
			pq.push({ depth + 1, pos + 1 });
			arr[pos + 1] = depth + 1;
		}
		if (pos>0&&pos * 2 <= 100000 && (arr[pos*2]==0 ||arr[pos * 2] > depth)) {
			pq.push({ depth, pos * 2 });
			arr[pos * 2] = depth;
		}
	}
	//return arr[x];
}
