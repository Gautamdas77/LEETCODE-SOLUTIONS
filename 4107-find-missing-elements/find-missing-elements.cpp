class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int small = nums[0];
        vector<int>miss;
        for(int i=0;i<n;i++){
            while (small < nums[i]) {
                miss.push_back(small);
                small++;
            } 
            small++;
        }
        return miss;
    }
};