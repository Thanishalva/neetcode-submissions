class Solution {
public:
    int maxArea(vector<int>& heights) {
       int maxwater=0;
       int left=0;
       int right=heights.size()-1;
       while(left<right){
        int water=0;
        int height=min(heights[left],heights[right]);
        int width=right-left;
        water=width*height;
        maxwater=max(water,maxwater);
        if(height==heights[left])left++;
        else
        right--;
       }
       return maxwater;
    }
};
