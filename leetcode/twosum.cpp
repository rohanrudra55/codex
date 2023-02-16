#include<bits/stdc++.h>
// main() is in header
#include <unordered_map>

int index(vector<int> arr, int k) {
	int s = 0, c = 0;
	for (auto &it : arr) {
		if (it == k) {
			if (s)
				return c;
			s = 1;
		}
		c++;
	}
	return c;
}

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> hash;
	int pos = 1;
	for (auto it : nums) {
		hash.insert(pair <int, int> (it, pos++));
	}

	vector<int> ans;
	for (auto it : hash)
		cout << it.first << ":" << it.second << " v:" << index(nums, it.first) << endl;
	int a;

	for (auto it : hash) {
		cout << "it.first:" << it.first << "it.second:" << it.second << endl;
		int fetch = hash[target - it.first];
		if (fetch != 0) {
			cout << "F: it.first:" << it.first << "it.second:" << it.second << endl;
			ans.push_back(it.second - 1);
			if (it.first == (target - it.first)) {
				a = it.first;
				break;
			}
			else {
				ans.push_back(fetch - 1);
				return ans;
			}
		}
	}
	hash.clear();
	ans.push_back(index(nums, a));
	return ans;
}

int solution() {
	vector<int> ans = {0, 4, 3, 6, 0};
	ans = twoSum(ans, 0);
	for (auto& it : ans)
		cout << it << endl;
	return 0;
}