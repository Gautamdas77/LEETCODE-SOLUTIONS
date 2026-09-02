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
        
        return dp[i][sum] = c1 + c2;
    }
  

    int findTargetSumWays(vector<int>& arr, int target) {
        int n = arr.size();
        int i = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int val = (sum+target)/2;
        if((sum+target)%2!=0) return 0;
        if(abs(target)>sum) return 0;
        vector<vector<int>>dp(n+1);
        for(int i=0;i<n;i++){
            vector<int>t(sum+1,-1);
            dp[i] = t;
        }
        
        return func(arr,n,i,val,dp);
    }
};