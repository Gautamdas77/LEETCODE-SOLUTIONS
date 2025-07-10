class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto p:nums){
            mpp[p]++;
            if(mpp[p]>1){
                return p;
            }
        }
        return 0;

    }
};