class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        map<int,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it:t){
            mpp[it]--;
        }
        for(auto it:mpp){
            if(it.second>0) return false;
        }
        return true;
    }
};