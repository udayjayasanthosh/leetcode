class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]].first=i;
            }
            mp[s[i]].second=i;
        }
        int count=0;
        for(auto i:mp)
        {
            int start=i.second.first;
            int end=i.second.second;
            if(end-start>1)
            {
                unordered_set<char>a;
                for(int j=start+1;j<end;j++)
                {
                    a.insert(s[j]);
                }
                count+=a.size();
            } 
        }
        return count;
    }
};