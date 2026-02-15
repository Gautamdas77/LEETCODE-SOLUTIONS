class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s[i]==s[j])  i++,j--;
            else return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
        }
        return true;
    }

    bool ispalindrome(string s, int left , int right){
        while(left<right){
            if(s[left]==s[right]) left++,right--;
            else return false;
        }
        return true;
    }
};