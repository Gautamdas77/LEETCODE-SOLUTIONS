class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;

        for (int num : nums) {
            total += num;
        }

        if (total % 2) {
            return 0;
        }

        return nums.size() - 1;
    }
};