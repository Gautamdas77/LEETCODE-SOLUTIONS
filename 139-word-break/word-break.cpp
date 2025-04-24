class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        for (int i = 0; i <= s.size(); i++) {
            if (!dp[i]) continue;
            for (auto& word : wordDict) {
                int len = word.size();
                if (i + len <= s.size() && s.substr(i, len) == word) {
                    dp[i + len] = true;
                }
            }
        }
        return dp[s.size()];
    }
};
