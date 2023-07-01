
#include<bits/stdc++.h>
using namespace std;


int fibbo(int a, vector<int> &dp) {
	if (a <= 1) return a;
	if (dp[a] != -1) return dp[a];
	return dp[a] = fibbo(a - 1, dp) + fibbo(a - 2, dp);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> dp(n + 1, -1);
	cout << fibbo(n, dp) << endl;

	int perv1 = 1;
	int perv2 = 0;
	for (int i = 2; i <= n; i++) {
		int cur = perv1 + perv2;
		perv2 = perv1;
		perv1 = cur;
	}
	cout << perv1 << endl;

	return 0;
}