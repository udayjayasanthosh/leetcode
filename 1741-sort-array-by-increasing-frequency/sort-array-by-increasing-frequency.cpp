class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            pair<int,int>p;
            p.first=i.second;
            p.second=i.first;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        int i=0;
        vector<int>ans;
        while(i<v.size())
        {
            int j=i+1;
            vector<int>help;
            for(int k=0;k<v[i].first;k++)
            {
                help.push_back(v[i].second);
            }
            while(j<v.size() and v[i].first==v[j].first)
            {
                for(int k=0;k<v[i].first;k++)
                {
                help.push_back(v[j].second);
                }
                j++;
            }
            sort(help.rbegin(),help.rend());
            for(int k=0;k<help.size();k++)
            {
                ans.push_back(help[k]);
            }
            i=j;
        }
        return ans;
    }
};