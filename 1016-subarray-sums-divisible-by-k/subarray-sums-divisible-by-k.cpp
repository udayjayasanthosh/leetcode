class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0,c=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];//-1%2=-1,1
            if(sum%k<0)
            {
                sum=sum%k+k;
            }
            if(mp.find((sum%k))!=mp.end())//-1:1
            {
                c+=mp[(sum%k)];
            }
            mp[(sum%k)]++;
        }
        return c;

    }
};