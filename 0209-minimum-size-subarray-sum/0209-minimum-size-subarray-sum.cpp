class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int sum=0;
        int mini=n+1;
        for(int r=0;r<n;r++)
        {
            sum=sum+nums[r];
            while(sum>=target)
            {
                mini=min(mini,r-l+1);
                sum=sum-nums[l];
                l++;
            }
            

        }
        return (mini==n+1)?0 : mini;
    }
};