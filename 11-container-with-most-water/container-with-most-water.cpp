class Solution {
public:
    int maxArea(vector<int>& height) {\
        int n = height.size();
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<j){
            int width = j-i;
            int high = min(height[i],height[j]);
            ans = max(ans,width*high);
            if(height[i]<height[j] || height[i]==height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
            else {
                i++;
            } 
        }

        return ans;
    }
};