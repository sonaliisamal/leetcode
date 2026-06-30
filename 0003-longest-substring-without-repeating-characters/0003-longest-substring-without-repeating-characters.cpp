class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        
        int maxi=0;
        set<int>st;

        for(int r=0;r<n;r++)
        {
            
            
            while(st.count(s[r]))
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
        }
        
        return maxi;
    }
};