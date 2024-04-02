class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a=t.size();
        unordered_map<char,char>mp;
        unordered_map<char,bool>mp1;
        for(int i=0;i<a;i++)
        {
           if(mp.find(s[i])==mp.end())
           {
            // if(mp.find(t[i])!=mp.end())return false;
            if(mp1.find(t[i])!=mp1.end())
            {
                return false;
            }
            mp[s[i]]=t[i];
            mp1[t[i]]=true;
            // mp[t[i]]=s[i];
           }
           else
           {
                if(mp[s[i]]!=t[i])
                return false;
           }
        }
        return true;
    }
};