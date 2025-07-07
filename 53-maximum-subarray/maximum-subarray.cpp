class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            current = current + nums[i];
            ans = max(ans,current);
            if(current<=0) current = 0;
            //ans = max(ans,current);
        }
        return ans;
    }
};