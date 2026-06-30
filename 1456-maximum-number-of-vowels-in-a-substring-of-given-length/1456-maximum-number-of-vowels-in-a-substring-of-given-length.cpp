class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int n = s.length();
        int maxi=0;
        string v="aeiouAEIOU";
        for(int r=0; r<k; r++)
        {

            if(v.find(s[r]) != string::npos)
            {
                count++;
            }
            
        }
        maxi=count;
        maxi=max(maxi,count);
        for(int r=k;r<n;r++)
        {

            if(v.find(s[r - k]) != string::npos)
            {
                count--;
            }

            
            if(v.find(s[r]) != string::npos)
            {
                count++;
            }
         maxi = max(maxi, count);
        }
        return maxi;
    }
};