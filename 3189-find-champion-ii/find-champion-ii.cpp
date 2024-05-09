class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        if(edges.size()==0 and n==1)return 0;
        unordered_map<int,int>mp;
        vector<int>v;
        for(auto i:edges)
        {
           if(mp.find(i[0])==mp.end())
           {
                mp[i[0]]=1;
           }
            mp[i[1]]=-1;
        }
        if(mp.size()<n) return -1;
        for(auto i:mp)
        {
            if(i.second==1)
            v.push_back(i.first);
        }
        if(v.size()>1)
        return -1;
        else
        return v[0]; 
    }
};