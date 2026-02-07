class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int required = target - nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==required){
                    return{i,j};
                }
            }
            mpp[nums[i]]++;
        }
        return {-1,-1};
    }
};