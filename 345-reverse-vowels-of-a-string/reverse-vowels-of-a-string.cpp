class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(tolower(s[i])!='a' && tolower(s[i])!='e' && tolower(s[i])!='i' && tolower(s[i])!='o' && tolower(s[i])!='u'){
                i++;
                continue;
            }
            if(tolower(s[j])!='a' && tolower(s[j])!='e' && tolower(s[j])!='i' && tolower(s[j])!='o' && tolower(s[j])!='u'){
                j--;
                continue;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++; 
                j--;
            }
        }
        return s;
    }
};