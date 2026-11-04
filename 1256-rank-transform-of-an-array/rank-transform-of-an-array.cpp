class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sec(arr.begin(),arr.end());
        sort(sec.begin(),sec.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(sec[i]) == mpp.end()) {
                mpp[sec[i]] = mpp.size() + 1;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(mpp.find(arr[i])!=mpp.end()){
                arr[i] = mpp[arr[i]];
            }
        }

        return arr;

    }
};