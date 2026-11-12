class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;
        if(cost1+cost2<=costBoth){
            ans += 1LL*cost1*need1;
            ans += 1LL*cost2*need2;
        }
        else{
            ans += 1LL*costBoth*min(need1,need2);
            if(need1>need2){
                ans += 1LL*min(cost1,costBoth)*(need1-need2);
            }
            else if(need1<need2){
                ans += 1LL*min(cost2,costBoth)*(need2-need1);
            }
        }

        return ans;
    }
};