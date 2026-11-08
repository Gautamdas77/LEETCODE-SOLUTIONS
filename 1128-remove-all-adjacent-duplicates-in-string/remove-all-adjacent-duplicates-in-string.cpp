class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        string ans = "";
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(st.empty() || s[i]!=st.top()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]==st.top()){
                st.pop();
            }
        }
        int n = st.size();
        while(n>0){
            ans+= st.top();
            st.pop();
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};