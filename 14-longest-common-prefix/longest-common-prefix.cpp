class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        sort(strs.begin(),strs.end());
        string k = strs[0];
        string m = strs[n-1];
        for(int i=0;i<min(k.size(),m.size());i++){
            if(k[i]==m[i]) ans = ans + k[i];
            else return ans;
        }

        return ans;
    }
};