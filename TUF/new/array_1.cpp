#include <bits/stdc++.h>
using namespace std;

// Q1
bool check(vector<int> &nums)
{
    int rotation_point = -1;

    // Checck for rotation point
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            if (rotation_point != -1)
                return false;
            rotation_point = i + 1;
        }
        if (rotation_point != -1 && nums[rotation_point - 1] < nums[i + 1])
            return false;
    }

    // No rotation already sorted
    if (rotation_point == -1)
        return true;

    // Fix rotation
    vector<int> unrotated_nums(nums.begin() + rotation_point, nums.end());
    unrotated_nums.insert(unrotated_nums.end(), nums.begin(), nums.begin() + rotation_point);

    // Check unroated array
    for (int i = 0; i < unrotated_nums.size() - 1; i++)
    {
        if (unrotated_nums[i] > unrotated_nums[i + 1])
            return false;
    }

    return true;
}

// Q2 Sorted array A[] of size N
int remove_duplicate(int a[], int n)
{
    int cnt = 0;
    vector<int> temp_arr;
    temp_arr.push_back(a[cnt]);
    for (int i = 0; i < n; i++)
    {
        if (a[cnt] != a[i])
        {
            cnt = i;
            temp_arr.push_back(a[cnt]);
        }
    }
    cnt = 0;
    for (int &it : temp_arr)
        a[cnt++] = it;
    return cnt;
}

// Q3
void leftRotate(int arr[], int k, int n)
{
    vector<int> temp;
    k = k % n;
    if (k)
    {
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                temp.push_back(arr[i]);
            else
                arr[i - k] = arr[i];
        }
        for (int i = 0; i < k; i++)
        {
            arr[n - k + i] = temp[i];
        }
    }
}
void reverse(int arr[], int pt1, int pt2)
{

    while (1)
    {
        if (pt1 >= pt2)
            break;
        swap(arr[pt1++], arr[pt2--]);
    }
}
void leftRotate_Optimal(int arr[], int k, int n)
{
    k = k % n;
    if (k)
    {
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
        reverse(arr, 0, n - 1);
    }
}

// Q4
void pushZerosToEnd(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }

        else
        {
            arr[i - cnt] = arr[i];
        }
    }
    for (int i = n - cnt; i < n; i++)
    {
        arr[i] = 0;
    }
}
void pushZerosToEnd_Optimal(int arr[], int n)
{
    int zpt = 0, flag = 1;
    for (int cpt = 0; cpt < n; cpt++)
    {
        if (arr[cpt] != 0)
        {
            swap(arr[zpt], arr[cpt]);
            zpt++;
        }
    }
}

// Q5
// Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
// The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.
vector<int> unionofarrays(int a[], int b[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> Union;
    while (i < n && j < n)
    {
        if (a[i] < b[j])
            Union.push_back(a[i++]);
        else if (a[i] > b[j])
            Union.push_back(b[j++]);
        else
        {
            Union.push_back(a[i++]);
            j++;
        }
    }

    while (i < n)
    {
        Union.push_back(a[i++]);
    }

    while (i < n)
    {
        Union.push_back(b[j++]);
    }

    return Union;
}

// Q6
int missingNumber(int A[], int N)
{
    // Sum(A)-Sumtion(1 to N)
    // Your code goes here
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ A[i];
        cout << "XOR2:" << xor2 << endl;
    }
    xor1 = xor1 ^ (N);
    return xor1 ^ xor2;
}

// Q7
// Sliding window approach REVISIT
int findZeroes(int arr[], int n, int m)
{
    int len = 0, spt = 0, skp = m, lz = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (m == 0)
                lz = i;
            if (skp <= 0)
            {
                skp = m;
                len = max(len, i - spt);
                spt = lz + 1;
            }

            skp--;
            lz = i;
        }
    }
    return max(len, n - spt);
}

// Q8
int search(int A[], int N)
{
    // code
    int xor1 = 0;
    for (int i = 0; i < N; i++)
    {
        xor1 ^= A[i];
    }
    return xor1;
}

// Q9
int lenOfLongSubarr(int A[], int N, int K)
{
    map<int, int> prefixSum;
    int len = 0, sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sum == K)
        {
            len = max(len, i + 1);
        }
        int rem = sum - K;
        if (prefixSum.find(rem) != prefixSum.end())
        {
            len = max(len, i - prefixSum[rem]);
        }
        if (prefixSum.find(sum) == prefixSum.end())
        {
            prefixSum[sum] = i;
        }
    }
    return len;
}
int lenOfLongSubarr_Optimal(int A[], int N, int K)
{
    // Two pointers
    int left = 0, right = 0;
    int sum, len;
    while (right < N)
    {
        sum += A[right];
        while (sum > K && right > left)
        {
            sum = sum - A[left++];
        }
        if (sum == K)
        {
            len = max(len, right - left + 1);
        }
        right++;
    }
    return len;
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
    }
    // int m; cin >> m;
    // int ar2[m]; for(int i=0;i<m;i++) {cin>>ar2[i];}
    // vector<int> vec; for (int i = 0; i < n; i++){ int t;cin >> t;vec.push_back(t); }  // Vector Input
    // int k; cin >> k;

    // Calls
    // cout<<check(arr);
    // k=remove_duplicate(arr,n);
    // leftRotate(arr,k,n);
    // leftRotate_Optimal(arr,k,n);
    // pushZerosToEnd(arr,n);
    // pushZerosToEnd_Optimal(arr,n);
    // vector<int> vec = unionofarrays(arr,ar2,n,m);
    // cout<<missingNumber(arr,n);
    // cout<<findZeroes(arr,n,k);
    cout << search(arr, n);

    // for(int i=0;i<n;i++) {cout<<arr[i]<<" ";}    // Array
    // for (auto &it : vec){ cout << it << " "; }  // Vector
    return 0;
}