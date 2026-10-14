class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0;
        int last[256];
        int maxlen = 0;
        fill(begin(last), end(last), -1);
        for(int right=0;right<n;right++){
            char c = s[right];
            if(last[c]>=left){
                left = last[c]+1;
            }
            last[c] = right;
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};