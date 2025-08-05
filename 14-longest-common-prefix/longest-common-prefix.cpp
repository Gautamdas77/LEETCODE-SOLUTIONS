class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        if(n==0) return "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]) ans += first[i];
            else return ans;
        }
        return ans;
    }
};