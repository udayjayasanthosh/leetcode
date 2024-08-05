class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        vector<string>v;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto i:arr)
        {
            if(mp[i]==1)
            v.push_back(i);
        }
        if(v.size()<k)
        return "";
        return v[k-1];
    }
};