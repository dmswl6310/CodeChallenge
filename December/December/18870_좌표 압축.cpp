//30
#include <iostream>
 #include <algorithm>
#include <vector>
using namespace std;
int comp(pair<int, int> a, pair<int, int> b);
int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> nums(N);
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		nums[i].first = tmp;
		nums[i].second = i;
	}

	sort(nums.begin(), nums.end());
	int pre = nums[0].first;
	nums[0].first = 0;
	int k = 0;
	for (int i = 1; i < N; i++) {
		int tmp = nums[i].first;
		if (tmp != pre) nums[i].first = (++k);
		else nums[i].first = k;
		pre = tmp;
	}
	sort(nums.begin(), nums.end(), comp);

	for (int i = 0; i < N; i++) {
		printf("%d ", nums[i].first);
	}
}
int comp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}