class Solution {
public:
    bool isPalindrome(int x) {
    double original = x;
    double reversed = 0;
    while(x>0){
        int digit = x%10;
        reversed = reversed*10 + digit;
        x = x/10;
    }
    if(x<0){
        return false;
    }
    if(original==reversed){
        return true;
    }
    else{
        return false;
    }
    }
};