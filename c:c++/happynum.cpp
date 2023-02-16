#include<iostream>
#include<set>
using namespace std;
class Solution1 {
public:
    bool isHappy(int n) {
        int a=n;
        while(n!=1){
            if(a!=n && n>99 && n%2!=0)
                return false;

            int s=0;
            for(int i=n;i>0;i/=10){
                int d=i%10;
                s+=d*d;
            }
            cout<<"n:"<<n<<"s:"<<s<<endl;
            n=s;
            
            
        }
        return true;


    }
};

class Solution {
public:
    int numSquareSum(int n)
    {
        int squareSum = 0;
        while (n) {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }
    bool isHappy(int n) {
        set<int> st;
        while (1)
        {
            n = numSquareSum(n);
            cout<<n<<endl;
            if (n == 1)
                return true;
            if (st.find(n) != st.end())
                return false;
            st.insert(n);
        }
    }
};

int main(){
    Solution obj;
    cout<<obj.isHappy(7);
    return 0;
};