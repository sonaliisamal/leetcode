class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int n=height.size();
        int r=n-1;
        int maxi=0;
        while(l<r)
        {
            int width=r-l;
            int h = min(height[r],height[l]);
            int area=width*h;
            maxi=max(maxi,area);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxi;
        
    }
};