class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int a=0;
        int b=0;
        for(auto i:mp)
        {
            if(i.second%2==0)
            {
                a+=i.second;
            }
            else
            {
                b=1;
                a+=i.second-1;
            }
        }
        if(b!=0)
        a+=b;
        return a;
    }
};