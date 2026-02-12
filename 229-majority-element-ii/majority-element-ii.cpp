class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1 = NULL;
        int maj2 = NULL;
        int cnt1 = 0; 
        int cnt2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                cnt1++;
            }
            else if(nums[i]==maj2){
                cnt2++;
            }
            else if(cnt1==0){
                maj1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2==0){
                maj2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        int freq1 = 0;
        int freq2 = 0;
        for(auto it:nums){
            if(it==maj1) freq1++;
            else if(it==maj2) freq2++;
        }
        if(freq1>floor(nums.size()/3)) ans.push_back(maj1);
        if(freq2>floor(nums.size()/3)) ans.push_back(maj2);
        return ans;
    }
};