class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int n=nums.size()/2;
        for(auto i:mp)
        {
            if(i.second==n)
            return i.first;
        }
        return 0;
    }
};