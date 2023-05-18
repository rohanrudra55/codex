
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int f(int n, vector<int>&dp) {
		if (n == 0 || n == 1) return 1;
		if (dp[n] != -1) return dp[n];
		return dp[n] = f(n - 1, dp) + f(n - 2, dp);
	}
	int climbStairs(int n) {
		vector<int> dp(n + 1, -1);
		return f(n, dp);
	}
};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Solution obj;
	cout << obj.climbStairs(44);
	return 0;
}