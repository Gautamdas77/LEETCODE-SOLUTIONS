class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long even = 1, odd = 0;
        long long ans = 0;
        int prefix = 0;
        int MOD = 1e9 + 7;

        for (int x : arr) {
            prefix += x % 2;

            if (prefix % 2 == 0) {
                even++;
            } else {
                odd++;
            }

            ans = (even * odd);
        }

        return ans % MOD;
    }
};