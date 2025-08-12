class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1 = INT_MIN;
        int maj2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        int n =  nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == maj1){
                cnt1++;
            }
            else if(nums[i] == maj2){
                cnt2++;
            }
            else if(cnt1 == 0){
                maj1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                maj2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = cnt2 = 0;
        for (int num : nums) {
            if (num == maj1) cnt1++;
            else if (num == maj2) cnt2++;
        }

        vector<int> result;
        if (cnt1 > n/3) result.push_back(maj1);
        if (cnt2 > n/3) result.push_back(maj2);
        return result;
    }
};