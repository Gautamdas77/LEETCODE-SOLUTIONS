class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int k = word2.size();
        int i = 0;
        int j = 0;
        while(i<n && j<k){
            ans += word1[i];
            i++;
            ans += word2[j];
            j++;
        }
        while(i<n){
            ans += word1[i];
            i++;
        }
        while(j<k){
            ans += word2[j];
            j++;
        }

        return ans;
    }
};