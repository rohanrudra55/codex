
#include<bits/stdc++.h>
using namespace std;


// class Solution {
// public:
// 	int maxProfit(vector<int>& prices) {

// 		if (is_sorted(prices.begin(),
// 		              prices.end(), greater<int>())) return 0;

// 		int profit = 0;
// 		for (int i = 0; i < prices.size(); i++) {
// 			for (int j = i; j < prices.size(); j++)
// 				if (prices[i] < prices[j]) {
// 					profit = max(prices[j] - prices[i], profit);
// 				}
// 		}
// 		return profit;
// 	}
// };

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (is_sorted(prices.begin(),
		              prices.end(), greater<int>())) return 0;
		int profit = 0;
		stack<int> st;
		st.push(prices[0]);
		for (auto it : prices) {
			if (st.top() > it)
				st.push(it);
			profit = max(it - st.top(), profit);
		}
		return profit;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Solution obj;
	// vector<int> arr = {7, 1, 5, 3, 6, 4};
	vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
	cout << obj.maxProfit(arr);

	return 0;
}