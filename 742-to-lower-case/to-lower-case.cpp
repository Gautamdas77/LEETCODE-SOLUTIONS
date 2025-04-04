class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            char k = s[i];
            s[i] = tolower(k);
        }
        return s;
    }
};