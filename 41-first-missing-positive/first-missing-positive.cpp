class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int number = 1;
        int val = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<1){
                continue;
            }
            else if(nums[i]==val) continue;
            else if(nums[i]==number){
                number++;
                val = nums[i];
            }
            else break;
        }

        return number;
    }
};