class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int noPower = arr[0];
        int Power = 0;
        int res = arr[0];
        for(int i=1;i<n;i++){
            int v1 = arr[i];
            int v2 = noPower + arr[i];
            int v3 = Power + arr[i];
            int v4 = noPower;
            noPower = max(v1,v2);
            Power = max(v3,v4);
            res = max(res,max(noPower,Power));
        }

        return res;
    }
};