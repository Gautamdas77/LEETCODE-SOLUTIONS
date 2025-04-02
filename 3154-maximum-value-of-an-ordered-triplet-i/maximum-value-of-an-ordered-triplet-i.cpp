class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long max_diff = 0;
        long long maxi = 0;
        long long result = 0;
        
        for(int i=0;i<n;i++){
            result = max(result,max_diff*nums[i]);
            max_diff = max(max_diff,maxi - nums[i]);
            maxi = max(maxi,(long long)nums[i]);
        }

        return result;
    }
};