class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>vec;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec.push_back(matrix[i][j]);
            }
        }
        int left = 0;
        int right = (m*n)-1;
        while(left<=right){
            int mid = (right + left)/2;
            if(vec[mid]==target) return true;
            else if(vec[mid]>target) right = mid - 1;
            else left = mid + 1;
        }

        return false;
    }
};