class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (nums.size() < 2){
            return false;
        }
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%k==0 and i>=1)
            {
                return true;
            }
            if(mp.find(sum%k)==mp.end())
            {
                mp[sum%k]=i;
            }
            else
            {
                if(abs(i-mp[sum%k])>=2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};