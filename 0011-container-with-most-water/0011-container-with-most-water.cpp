class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0, rp=n-1, MaxWater = 0;
        while(lp<rp){
            int width = rp-lp;
            int Ht = min(height[lp],height[rp]);
            int area_wt = width*Ht;
            MaxWater = max(area_wt,MaxWater);
            height[lp]<height[rp]?lp++:rp--;


        }
        return MaxWater;
    }
};