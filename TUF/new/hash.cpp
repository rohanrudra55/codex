#include <bits/stdc++.h>
using namespace std;
bool pairComparator(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first > b.first;
}

// Q1
void frequencyCount(vector<int> &arr, int N, int P)
{
    map<int, int> hash;
    int temp = N;
    while (N--)
    {
        hash[arr[N]]++;
    }
    for (int i = 0; i < temp; i++)
    {
        if ((i + 1) <= P)
            arr[i] = hash[i + 1];
        else
            arr[i] = 0;
    }
}

// Q2
vector<int> topK(vector<int> &nums, int k)
{
    map<int, int> hash;
    for (auto it : nums)
    {
        hash[it]++;
    }
    vector<int> ans;
    vector<pair<int, int>> pairs;
    for (auto it : hash)
    {
        pairs.push_back(pair<int, int>(it.first, it.second));
    }
    for (auto it : pairs)
        sort(pairs.begin(), pairs.end(), pairComparator);
    for (auto it : pairs)
    {
        if (k-- > 0)
        {
            ans.push_back(it.first);
        }
        else
        {
            break;
        }
    }

    return ans;
}

// Driver Fucntion
int main()
{
    int n, k;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    } // Vector Output

    cin >> k;
    // frequencyCount(arr, n, k);   // Q1
    arr = topK(arr, k); // Q2

    for (auto &it : arr)
    {
        cout << it << " ";
    } // Vector Output
    return 0;
}