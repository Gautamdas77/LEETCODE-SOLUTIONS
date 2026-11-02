class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixsum(nums.size());
        prefixsum[0] = nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i] = prefixsum[i-1] + nums[i];
        }

        return prefixsum;
    }
};