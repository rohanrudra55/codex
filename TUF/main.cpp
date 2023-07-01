#include <bits/stdc++.h>
using namespace std;
// Driver Fucntion

// Q1
int binarysearch(int arr[], int n, int search)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > search)
        {
            right = mid - 1;
        }
        else if (arr[mid] < search)
        {
            left = mid + 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    // Your code goes here
    sort(A, A + N);
    sort(B, B + M);
    map<pair<int, int>, int> hash;
    for (int i = 0; i < N; i++)
    {
        int search = X - A[i];
        if (binarysearch(B, M, search))
        {
            pair<int, int> tmp(A[i], search);
            if (hash.find(tmp) == hash.end())
            {
                hash[tmp] = 1;
            }
        }
    }

    vector<pair<int, int>> vect;

    for (const auto &it : hash)
    {
        vect.push_back(it.first);
    }
    return vect;
}

// Q2
void sort012(int a[], int n)
{
    int right = n - 1, mid = 0, left = 0;
    while (mid <= right)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[left]);
            left++;
            mid++;
        }

        else if (a[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(a[mid], a[right]);
            right--;
        }
    }
}

// Q2
int majorityElement(int a[], int size)
{
    // Nlog(N)
    map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    for (const auto &it : hash)
    {
        if (it.second > size / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int majorityElement_Optimal(int a[], int size)
{
    // Moore Voting Algorithm
    int ele, cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (cnt == 0)
        {
            ele = a[i];
            cnt = 1;
        }
        else if (ele == a[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == ele)
        {
            cnt++;
        }
    }
    if (cnt > (size / 2))
        return ele;
    return -1;
}

// Q3
void maxSubarraySum()
{
    //  To print sum of all the subarrays O(N2) ans O(N3)
    for (int k = 1; k <= 4; k++)
    {
        int sum = 0;
        for (int i = k; i <= 4; i++)
        {
            sum += i;
            // Omit this inner loop
            for (int j = k; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
}

long long maxSubarraySum_Optimal(int arr[], int n)
{
    long long sum = 0, len = INT_MIN;
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
            // everytime when sum = 0 a new sub array is starting
        }
        sum += arr[i];
        len = max(len, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return len;
}

long long maxSubarraySum_Optimal_GFG(long long arr[], long long N)
{
    long long sum = 0, len = INT_MIN;
    for (long long i = 0; i < N - 1; i++)
    {
        sum = arr[i] + arr[i + 1];
        len = max(len, sum);
    }
    return len;
}

// Q4

int stockBuyAndSell(int n, vector<int> &prices)
{
    // Differnt stock prices
    int hld_i = 0, hld_j = 0, hold = prices[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int profit = (prices[j] - prices[i]); // O(N2)
            //  This will not work
            // cout<<prices[j]<<"-"<<prices[i]<<" "<<endl;
            // if (hold <= profit)
            // {
            //     printf("Profit: %d I:%d J:%d \n", profit,hld_i,hld_j);
            //     if (hld_i < i && hld_j < j)
            //     {
            //         hold += profit;
            //         printf("Profit Holding: %d\n", profit);
            //     }
            //     hold = profit;
            //     hld_i = i;
            //     hld_j = j;
            // }

            // Brutforce O(N3) START{
            // for (int k = i; k <= j; k++)
            // {
            //     if(k==i){
            //         profit-=prices[k];
            //         cout<<prices[k];
            //     }
            //     if(k==j){
            //         profit+=prices[k];
            //         cout<<"-"<<prices[k]<<" ";
            //     }
            // }
            // printf("Profit: %d\n", profit);
            // } END
        }
    }
    return hold;
}

int maxProfit(vector<int> &prices)
{
    // Same stock prices
    if (is_sorted(prices.begin(),
                  prices.end(), greater<int>()))
    {
        return 0;
    }

    int profit = 0, maxProfit = 0, hold = prices[0];
    for (const auto &price : prices)
    {
        if (hold > price)
        {
            hold = price;
            maxProfit += profit;
        }
        profit = max(price - hold, profit);
    }
    maxProfit += profit;
    return maxProfit;
}

// Q5
void rearrange(int arr[], int n)
{
    // When possitive ans negatives are equal
    int ptv = 0, ntv = 1;
    int *ans = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[ptv] = arr[i];
            ptv += 2;
        }
        else
        {
            ans[ntv] = arr[i];
            ntv += 2;
        }
    }
    memcpy(arr, ans, n * sizeof(int));
    // for (int i = 0; i < n;) // Change condition to "i < n - 1" to avoid accessing out-of-bounds element
    // {
    //     if (i%2==0 && arr[i] < 0)
    //     {
    //         swap(arr[i], arr[ntv]);
    //         ntv += 2;
    //     }
    //     else if(i%2!=0 && arr[i]>=0)
    //     {
    //         swap(arr[i], arr[ptv]);
    //         ptv += 2;
    //     }
    //     else{
    //         if(i%2==0) ptv=i+2;
    //         else ntv=i+2;
    //         i++;
    //     }
    // }
}
void rearrange_GFG(int arr[], int n)
{
    // bruteforce
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
}

// Driver Fucntion
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // Array

    // int m; cin >> m;
    // int ar2[m]; for(int i=0; i<m; i++) { cin>>ar2[i]; }  // Array

    // vector<int> vec;
    // for (int i = 0; i < n; i++)
    // {
    //     int t;
    //     cin >> t;
    //     vec.push_back(t);
    // } // Vector

    // int k; cin >> k;
    // binarysearch(arr, n);
    // sort012(arr, n);
    // cout<<majorityElement(arr,n);
    // cout<<majorityElement_Optimal(arr,n);
    // maxSubarraySum();
    // cout << maxSubarraySum_Optimal_GFG(arr, n);
    // cout << stockBuyAndSell(n, vec);
    // cout << maxProfit(vec);
    // rearrange(arr,n);
    rearrange_GFG(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } // Array

    // for (auto &it : vec){ cout << it << " "; }   // Vector
    return 0;
}