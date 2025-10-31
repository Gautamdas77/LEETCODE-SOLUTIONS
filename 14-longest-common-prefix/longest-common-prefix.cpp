class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s = "";
        int n = strs.size();
        if(n==1) return strs[0];
        for(int i=0;i<n;i++){
            int j = n-1;
            int l = strs[i].size();
            for(int k=0;k<l;k++){
                if(strs[i][k]==strs[j][k]){
                    s = s + strs[i][k];
                }
                else{
                    break;
                }
            }
            break;
        }
        return s;
    }
};