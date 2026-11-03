class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int cumsum = 0;
        int ans = 0;
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) cumsum -= 1;
            else cumsum++;
            
            if(mpp.find(cumsum)!=mpp.end()){
                ans = max(i-mpp[cumsum],ans);
            }
            else mpp[cumsum] = i;
        }

        return ans;
    }
};