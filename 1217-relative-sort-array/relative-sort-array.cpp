class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>v;
        for(auto i:arr1)
        mp[i]++;
        for(auto i:arr2)
        {
            int a=mp[i];
            for(int j=0;j<a;j++)
            v.push_back(i);
            mp.erase(i);
        }
        for(auto i:mp)
        {
            int a=i.second;
            int b=i.first;
            for(int i=0;i<a;i++)
            {
                v.push_back(b);
            }
        }
        return v;
    }
};