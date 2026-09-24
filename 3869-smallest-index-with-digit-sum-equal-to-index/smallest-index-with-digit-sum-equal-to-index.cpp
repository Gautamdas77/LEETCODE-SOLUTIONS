class Solution {
public:
    int sum(int val){
        int total = 0;
        while(val!=0){
            int last = val%10;
            total += last;
            val = val/10;
        }
        return total;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int val = sum(nums[i]);
            if(val == i) return i;
        }
        return -1;
    }
};