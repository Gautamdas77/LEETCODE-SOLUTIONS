class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains1 = false;
        for(int i=0;i<n;i++){
            if(nums[i]==1) contains1 = true;
            else if(nums[i]<1 || nums[i]>n) nums[i] = 1;
        }
        if(contains1 == false) return 1;

        for(int i=0;i<n;i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx]<0) continue;
            else nums[idx] = -1 * nums[idx];
        }

        for(int i=0;i<n;i++){
            if(nums[i]<0) continue;
            else return i+1;
        }

        return n+1;
    }
};