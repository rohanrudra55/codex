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
	// pre-compute
	map<int , int> map;
	for (int i = 0; i < n; i++) {
		map[arr[i]]++;
	}

	// iterate map
	for (auto it : map) {
		cout << it.first << "<-" << it.second << endl;
	}

	int q;
	cin >> q;
	while (q--) {
		int number;
		cin >> number;
		cout << map[number] << endl;
	}
}