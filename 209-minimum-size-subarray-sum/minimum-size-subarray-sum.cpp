class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int cnt = INT_MAX;
        int sum = 0;
        while(j<n){
            sum += nums[j];
            while(sum>=target) {
                cnt = min(cnt,j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return cnt == INT_MAX ? 0 : cnt;
    }
};