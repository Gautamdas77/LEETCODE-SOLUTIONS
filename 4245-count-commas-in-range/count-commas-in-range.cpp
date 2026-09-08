class Solution {
public:
    int countCommas(int n) {
        if (n < 1000)
            return 0;

        if (n <= 9999)
            return n - 999;

        return 9000 + (n - 9999);
    }
};