class Solution {
public:
    int countsum(vector<int>&nums,int mid){
        int val = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i]<=mid){
                sum += nums[i];
            }
            else{
                val += 1;
                sum = nums[i];
            }
        }
        return val;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) return -1;
        int left = *max_element(nums.begin(),nums.end());
        int right = accumulate(nums.begin(),nums.end(),0);
        while(left<=right){
            int mid = left + (right - left)/2;
            int sum = countsum(nums,mid);
            if(sum>k) left = mid + 1;
            else right = mid - 1;
        }

        return left;
    }
};