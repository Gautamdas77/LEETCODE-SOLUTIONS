class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int min = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<min) min = nums[i];
            sum += nums[i];
        }

        return sum - n*min;
    }
};