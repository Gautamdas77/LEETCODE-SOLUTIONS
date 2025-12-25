class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>dp(numRows+1,vector<int>(numRows+1,0));
        for(int i=0;i<numRows;i++){
            dp[i][0] = 1;
            dp[i][i] = 1;           
        }
        
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows>1)
            ans.push_back({1,1});
        for(int i=2;i<numRows;i++){
            vector<int> v;
            v.push_back(1);
            for(int j=1;j<=i;j++){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1]; 
                v.push_back(dp[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};