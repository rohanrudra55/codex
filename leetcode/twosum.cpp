#include<bits/stdc++.h>
using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {
	vector<int>ans;
	unordered_map<int, int> hash;
	for (int pos = 0;; pos++) {
		if ((hash[target - nums[pos]])) {
			ans.push_back((hash[target - nums[pos]]) - 1);
			ans.push_back(pos);
			break;
		}
		else {
			hash[nums[pos]] = pos + 1;
		}

	}
	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> input = { -3, 4, 5, 3};
	display(twoSum(input, 0));

	return 0;
}