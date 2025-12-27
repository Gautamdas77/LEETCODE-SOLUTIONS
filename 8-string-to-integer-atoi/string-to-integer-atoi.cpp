#include<bits/stdc++.h>
class Solution {
public:
    void solve(int i, string&s, string&ans){
        if(i>=s.size()) return;

        if(s[i]==' ' && ans.size()==0){
            solve(i+1,s,ans);
        }
        else if(ans.size()==0 && (s[i]=='+' || s[i]=='-')){
            ans+=s[i];
            solve(i+1,s,ans);
        }
        else if(s[i]>='0' && s[i]<='9'){
            ans+=s[i];
            solve(i+1,s,ans);
        }
        else{
            return;
        }
    }
    int myAtoi(string s) {
        string ans2="";
        solve(0,s,ans2);
        string ans;
        for(char c:ans2){
            if(c=='0' && (ans=="" || ans=="-" ||ans=="+")){
                continue;
            }
            else ans+=c;
        }
        if(ans=="+" || ans=="" || ans=="-") return 0;

        if(ans.size()>11){
            if(ans[0]=='-') return INT_MIN;
            else return INT_MAX;
        }


        if(stoll(ans)<INT_MIN){
            return INT_MIN;
        }
        else if(stoll(ans)>INT_MAX){
            return INT_MAX;
        }
        else{
            return stoi(ans);
        }
    }
};