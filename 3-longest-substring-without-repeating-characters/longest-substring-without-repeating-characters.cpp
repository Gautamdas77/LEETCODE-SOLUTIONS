class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<int,int>mpp;
        int low = 0;
        int ans = 0;
        for(int high=0;high<n;high++){
            mpp[s[high]]++;
            int k = high-low+1;
            while(mpp.size()<k){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
                k = high-low+1;
            }

            int len = high-low+1;
            ans = max(ans,len);
        }

        return ans;
    }
};