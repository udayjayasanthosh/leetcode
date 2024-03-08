class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int maxi=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>maxi)
            {
                c=1;
                maxi=i.second;
            }
            else if(i.second==maxi)
            {
                c++;
            }
        }
        return c*maxi;
    }
};