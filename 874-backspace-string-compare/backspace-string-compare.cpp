class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;

        for(char ch : s){

            if(!s1.empty() && ch == '#'){
                s1.pop();
            }else if(ch != '#'){
                s1.push(ch);
            }

        }


        for(char ch : t){

            if(!s2.empty() && ch == '#'){
                s2.pop();
            }else if(ch != '#'){
                s2.push(ch);
            }

        }

        return s1 == s2;
    }
};