class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 2)
            return n;

        int i = 1;
        int cnt = 1;

        for (int j = 1; j < n; j++) {

            if (nums[i - 1] == nums[j]) {
                if (cnt < 2) {
                    nums[i] = nums[j];
                    i++;
                    cnt++;
                }
            }
            else {
                nums[i] = nums[j];
                i++;
                cnt = 1;
            }
        }

        return i;
    }
};