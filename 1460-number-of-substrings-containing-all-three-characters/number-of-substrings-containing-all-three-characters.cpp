class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        int size=s.size();
        int left=0;
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[s[i]]++;
            while(mp['a']>0 and mp['b']>0 and mp['c']>0)
            {
                ans+=size-i;
                mp[s[left]]--;
                left+=1;

            }
        }
        return ans;
    }
};