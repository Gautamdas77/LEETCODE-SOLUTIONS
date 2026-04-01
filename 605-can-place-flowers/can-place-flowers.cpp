class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        int val = 0;
        if(n==0) return true;
        if(k==1 && flowerbed[0]==0) return n==1;
        else if(k==1 && flowerbed[0]==1) return false;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            val++;
            flowerbed[0] = 1;
        }
        for(int i=1;i<k-1;i++){
            if(flowerbed[i]==0){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    val++;
                    flowerbed[i] = 1;
                }
            }
        }
        if(flowerbed[k-1]==0 && flowerbed[k-2]==0){
            val++;
            flowerbed[k-1] = 1;
        }
        if(val>=n) return true;
        else return false;
    }
};