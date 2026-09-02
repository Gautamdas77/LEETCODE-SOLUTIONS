class Solution {
public:

    int func(vector<int>&arr, int n, int i, int sum,vector<vector<int>>&dp){
        if(i==n){
            if(sum==0) return true;
            else return false;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        if(arr[i]>sum) return dp[i][sum] = func(arr,n,i+1,sum,dp);
        
        int c1 = func(arr,n,i+1,sum-arr[i],dp);
        int c2 = func(arr,n,i+1,sum,dp);
        
        return dp[i][sum] = c1 or c2;
    }

    bool canPartition(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        vector<vector<int>>dp(n+1);
        for(int i=0;i<n;i++){
            vector<int>t(sum+1,-1);
            dp[i] = t;
        }
        if(sum%2!=0) return false;
        return func(arr,n,i,sum/2,dp);
    }
};