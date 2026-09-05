class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int ten = 0;
        int twenty = 0;
        if(bills[0]!=5) return false;
        if(bills[1]==20) return false;
        for(int i=0;i<n;i++){
            if(bills[i]==10){
                if(five!=0){
                    five--;
                }
                else return false;
                ten++;
            }
            else if(bills[i]==20){
                if(ten!=0 && five!=0){
                    five--;
                    ten--;
                }
                else if(five>2){
                    five = five -3;
                }
                else return false;
                twenty++;
            }
            else five++;
        }
        return true;
    }
};