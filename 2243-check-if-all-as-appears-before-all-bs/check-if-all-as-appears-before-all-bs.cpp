class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        bool check = false;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                if(check) return false;
            }
            else check = true;
        }

        return true;
    }
};