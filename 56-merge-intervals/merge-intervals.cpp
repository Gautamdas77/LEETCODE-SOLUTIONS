class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int k = 0;
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<n;i++){
            if(intervals[k][1]>=intervals[i][0]){
                intervals[k][1] = max(intervals[k][1],intervals[i][1]);
            }
            else{
                k++;
                intervals[k] = intervals[i];
            }
        }
        intervals.resize(k+1);
        return intervals;
    }
};