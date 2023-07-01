// frogjump.cpp gfg
// This can also be done in tabular method

#include<bits/stdc++.h>
using namespace std;

#define Tabular

class Solution {
public:
	int f(int n, vector<int>&v, vector<int> &dp) {
		if (n == 0) return 0;
		if ( dp[n] != -1) return dp[n];
		int l = f(n - 1, v, dp) + abs(v[n] - v[n - 1]);
		if (n != 1) {
			int r = f(n - 2, v, dp) + abs(v[n] - v[n - 2]);
			return dp[n] = min(l, r);
		}
		return l;
	}
	int minimumEnergy(vector<int>& height, int n) {
		vector<int> dp(n + 1, -1);
		return f(n - 1, height, dp);

#ifdef Tabular
		// More Space optimized
		int prv = 0;
		int prv2 = 0;
		for (int i = 0; i < n; i++) {
			int l = prv + abs(height[i] - height[i - 1]);
			int r = INT_MAX;
			if (i < n - 1)
				r = prv2 + abs(height[i] - height[i - 1]);
			int cur = min(l, r);
			prv2 = prv;
			prv = cur;
		}
		return prv;

#endif
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Solution obj;
	int n = 3;
	vector<int> v = {10, 50, 10};
	cout << obj.minimumEnergy(v, n);

	return 0;
}