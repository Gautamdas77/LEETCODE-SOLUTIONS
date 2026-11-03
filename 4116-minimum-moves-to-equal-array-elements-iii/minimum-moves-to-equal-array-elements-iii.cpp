class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = nums[0];
        for(int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi = nums[i];
            }
            sum += nums[i];
        }

        return maxi*n - sum;
    }
};