class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        bool out = false;
        int res = 0;
        for(auto it:mpp){
            if(it.second%2==0){
                res += it.second;
            }
            else{
                res += it.second -1;
                out = true;
            }
        }

        if(out){
            res++;
        }
        return res;
    }
};