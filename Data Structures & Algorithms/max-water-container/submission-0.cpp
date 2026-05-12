class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int i = 0;
        int j = n - 1;
        int ans = 0;

        while(i < j){
            if(heights[i] < heights[j]){
                ans = max(heights[i] * (j - i),ans);
                i++;
            }else if(heights[j] < heights[i]){
                ans = max(heights[j] * (j - i),ans);
                j--;
            }else{
                ans = max(heights[i] * (j - i),ans);
                i++;
                j--;
            }
        }
        return ans;
    }
};
