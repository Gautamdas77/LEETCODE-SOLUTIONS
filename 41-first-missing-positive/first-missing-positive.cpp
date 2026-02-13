class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int number = 1;
        for(auto it:mpp){
            if(it.first<1) continue;
            else if(it.first == number) number++;
            else break;
        }

        return number;
    }
};