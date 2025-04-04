class Solution {
public:
    int countKeyChanges(string s) {
        int n = s.size();
        int cnt = 0;
        for(int  i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]) cnt++;
        }
        return cnt-1;
    }
};