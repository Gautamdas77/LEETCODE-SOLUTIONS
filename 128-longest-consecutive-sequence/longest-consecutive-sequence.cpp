class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int ans = 1;
        if(nums.size()==0) return 0;
        //if(nums.size()==1) return 1;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1] - nums[i]) == 1){
                cnt++;
            }
            else if((nums[i+1] - nums[i]) == 0) continue;
            else cnt = 1;
            ans = max(ans,cnt);
        }
        return ans;
    }
};