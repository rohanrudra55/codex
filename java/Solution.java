class Solution{
    // 0-1 KNAPSACK
    static int knapsack(int W,int wt[],int val[],int n,int dp[][]){
        if(dp[n][W]!=-1) return dp[n][W];
        if( n==0 ) return ( wt[0]<=W )?val[0]:0;
        if(W==0) return 0;
        int nottake=knapsack(W,wt,val,n-1,dp);
        int take=(W>=wt[n])?val[n]+knapsack(W-wt[n],wt,val,n-1,dp):0;
        dp[n][W]=Math.max(take,nottake);
        return  dp[n][W];}
    // Unbound KNAPSACK
    static int unknapSack(int N, int W, int val[], int wt[]){
        int dp[][]=new int[N][W+1];
        for(int i=0;i<=W;i++) dp[0][i] = (int)(i/wt[0])*val[0];
        for (int i=1;i<N;i++){
            for(int j=0;j<=W;j++){
                int change = dp[i-1][j];
                int notchange = (j>=wt[i])?val[i]+dp[i][j-wt[i]]:0;
                dp[i][j] = Math.max(change,notchange);
            }
        }return dp[N-1][W];
    }
    // Binary Search
    static int binsearch (int arr[], int n, int search){
        int left = 0, right = n - 1;
        while (left <= right){
            int mid = (left + right) / 2;
            if (arr[mid] > search){right = mid - 1;}
            else if (arr[mid] < search){left = mid + 1;}
            else{return mid;}
        }return -1;
    }
    // Longest Common Subsequence
    static int lcs(int x, int y, String s1, String s2){
        int prv[]=new int[y];
        int cur[]=new int[y];
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(s1.charAt(i)==s2.charAt(j)) cur[j]=(j>0)?1+prv[j-1]:1;
                else{
                    int movept1=(i>0)?prv[j]:0;
                    int movept2=(j>0)?cur[j-1]:0;
                    cur[j] = Math.max(movept1,movept2);
                }
            }prv=cur.clone();
        }return prv[y-1];
    }
    // Reversing String 
    static String reverseStr(String S){
        StringBuilder reversed = new StringBuilder(S);
        return reversed.reverse().toString();
    }
    // Pair Class
    class pair{  
        long first, second;  
        public add(long first, long second){  
        this.first = first; this.second = second;}  
    }

    public static void main(String[] args){
        
    }
}