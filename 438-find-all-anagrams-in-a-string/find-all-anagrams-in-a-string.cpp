class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>checker,helper;
        vector<int>v;
        int psize=p.size();
        int ssize=s.size();
        if(psize>ssize) return v;
        for(auto i:p)
        {
            checker[i]++;
        }
        for(int i=0;i<psize;i++)
        {
            helper[s[i]]++;
        }
        if(helper==checker) v.push_back(0);
        for(int i=psize;i<ssize;i++)
        {
            helper[s[i]]++;
            char val=s[i-psize];
            helper[val]--;
            if(helper[val]==0)
            {
                helper.erase(val);
            }
            if(helper==checker)
            v.push_back(i-psize+1);
        }
        return v;
    }
};