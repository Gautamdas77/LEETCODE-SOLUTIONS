class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int max = piles[0];
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max) max = piles[i];
        }
        int right = max;
        while(left<right){
            int val = 0;
            int mid = left + (right-left)/2;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid==0) val += piles[i]/mid;
                else val += (piles[i]/mid) + 1;
            }
            if(val<=h) right = mid;
            else left = mid + 1;
        }

        return left;
    }
};