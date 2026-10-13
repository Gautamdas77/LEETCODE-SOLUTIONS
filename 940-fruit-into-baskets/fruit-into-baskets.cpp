class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int>mpp;
        int ans = 0;
        int low = 0;
        for(int high = 0;high<n;high++){
            mpp[fruits[high]]++;
            while(mpp.size()>2){
                mpp[fruits[low]]--;
                if(mpp[fruits[low]]==0){
                    mpp.erase(fruits[low]);
                }
                low++;
            }
            if(mpp.size()<=2){
                int len = high - low + 1;
                ans = max(len,ans);
            }
        }
        if(fruits.size()<=2){
            return fruits.size();
        }

        return ans;
    }
};