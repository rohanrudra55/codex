#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// Precompute
	int hash[13] = {0};
	for (int i = 0; i < n; i++) {
		hash[arr[i]] += 1;
	}

	int q;
	cin >> q;
	while (q--) {
		// Fetching
		int number;
		cin >> number;
		cout << number << ":" << hash[number] << endl;
	}

	return 0;
}