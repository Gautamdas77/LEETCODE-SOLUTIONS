class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int second = target - nums[i];
            if(mpp.find(second)!=mpp.end()){
                return {mpp[second],i};
            }
            else{
                mpp[nums[i]] = i;
            }

            }
            return {-1,-1};
        }
};