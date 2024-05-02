class Solution {
public:
    int findMaxK(vector<int> nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,char>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            break;
            mp[nums[i]]='0';
        }
        for(int i=n-1;i>=0;i--)
        {
            if(mp.find(-1*nums[i])!=mp.end())
            return nums[i];
        }
        return -1;
    }
};