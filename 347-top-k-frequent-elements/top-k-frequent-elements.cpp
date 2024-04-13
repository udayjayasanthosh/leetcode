class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>v;
        vector<int>a;
        for(auto i:mp)
        {
                pair<int,int>p;
                p.first=i.second;
                p.second=i.first;
                v.push_back(p);
        }
        sort(v.rbegin(),v.rend());
        // for(auto i:v)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i=0;i<v.size() and i<k;i++)
        {
            a.push_back(v[i].second);
        }
        // while(a.size()<k)
        // {

        // }
        return a;
    }
};