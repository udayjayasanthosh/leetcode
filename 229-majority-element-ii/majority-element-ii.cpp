class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>aa;
        int a=nums.size()/3;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second > a)
            {
                aa.push_back(i.first);
            }
        }
        return aa;
    }
};