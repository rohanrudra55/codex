
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int>p2) {
	// COmparator fuction to direct sort to work accoridng to our need
	if (p1.second < p2.second) return true;
	if (p1.second > p2.second) return false;

	if (p1.first > p2.first) return true;
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*
		Sort it according to the second element
		if second element is same then sort
		it accoridng to he first eelemnt but in descending
	*/

	int a = 0;
	int n = 3;
	pair<int, int> p[] = {{1, 2}, {2, 1}, {1, 4}};
	sort(p, p + n, comp); // Takes location
	for (auto it : p)
		cout << it.first << "," << it.second << endl;
	return 0;
}