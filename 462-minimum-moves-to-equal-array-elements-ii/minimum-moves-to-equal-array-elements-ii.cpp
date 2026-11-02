class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int moves = 0;
        nth_element(nums.begin(),nums.begin()+n/2,nums.end());
        int m = nums[n/2];
        for(int i=0;i<n/2;i++){
            moves += abs(nums[i]-m);
            moves += abs(nums[n-i-1]-m);
        }

        return moves;
    }
};