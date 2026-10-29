class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int best = nums[0];
        for(int i=1;i<n;i++){
            int n1 = best + nums[i];
            int n2 = nums[i];
            best = max(n1,n2);
            ans = max(best,ans);
        }

        return ans;
    }
};