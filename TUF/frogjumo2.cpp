#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

	int minimumEnergy(vector<int>& height, int n, int k) {
		// More Space optimized
		vector<int> dp(n + 1, 0);

		for (int i = 1; i < n; i++) {
			int m = INT_MAX;
			for (int j = 1; j <= k; j ++) {
				if (i - j >= 0)
					m = min(m, (dp[i - j] + abs(height[i] - height[i - j])));
			}
			dp[i] = m;
		}
		return dp[n - 1];
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Solution obj;
	int n = 3;
	vector<int> v = {10, 20, 10};
	cout << obj.minimumEnergy(v, n, 1);

	return 0;
}