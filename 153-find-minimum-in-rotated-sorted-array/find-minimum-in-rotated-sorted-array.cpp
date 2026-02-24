class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int mid = left + (right - left)/2;
            if(nums[nums.size()-1]>nums[0]) return nums[0];
            if(nums[mid]>nums[mid+1]) return nums[mid+1];
            else if(nums[mid]<nums[mid-1]) return nums[mid];
            else if(nums[mid]<nums[right]) right = mid - 1;
            else if(nums[mid]>nums[right]) left = mid + 1;
        }

        return nums[left];
    }
};