class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxWord = 0;
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < sentences[i].size(); j++) {
                if(sentences[i][j] == ' ') cnt++;
            }
            maxWord = max(maxWord, cnt + 1);
        }
        return maxWord;
    }
};