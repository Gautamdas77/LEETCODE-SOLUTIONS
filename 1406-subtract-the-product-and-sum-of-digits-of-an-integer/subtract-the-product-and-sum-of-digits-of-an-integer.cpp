class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n>0){
            int k = n%10;
            sum = sum + k;
            product = product*k;
            n = n/10;
        }
        return (product-sum);
    }
};