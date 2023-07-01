
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
// 	string gcdOfStrings(string str1, string str2) {

// 		str1 = max(str1, str2);
// 		str2 = min(str1, str2);
// 		string x = str2;
// 		if ((str1 + str2) != (str2 + str1))
// 			return "";

// 		for (int i = 0; i < (str2.length() / 2); i++) {

// 			if (str1.length() / 2 >= x.length() && str1.find(x) != string::npos && str2.length() / 2 >= x.length() && str2.find(x) != string::npos) {
// 				return x;
// 			}
// 			else if (str1.length() / 2 >= x.length() && str1.find(x) != string::npos) {
// 				return x;

// 			}
// 			x = str2.substr(i, (int) (str2.length() / 2));

// 		}

// 		return "";
// 	}
// };

class Solution {
public:
	int gcd(int p, int q) {
		if (q == 0) return p;
		return gcd(q, p % q);
	}

	string gcdOfStrings(string str1, string str2) {

		if ((str1 + str2) != (str2 + str1))
			return "";
		return str2.substr(0, gcd(str1.length(), str2.length()));

	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2;
	cin >> s1;
	cin >> s2;
	Solution obj;
	cout << obj.gcdOfStrings(s1, s2) << endl;

	return 0;
}