class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int size=nums.size();
        int ans=INT_MAX;
        vector<int>prefix(size);
        vector<int>sufix(size);
        unordered_map<int,int>mp;
        prefix[0]=nums[0];
        sufix[size-1]=nums[size-1];
        if(prefix[0]==x or sufix[size-1]==x) return 1;
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
            sufix[size-i-1]=sufix[size-i]+nums[size-i-1];
            if(prefix[i]==x or sufix[size-i-1]==x) ans=min(ans,i+1);
        }
        for(int i=0;i<size;i++)
        {
            mp[prefix[i]]+=i;
        }
        for(int i=size-1;i>=0;i--)
        {
            int val=x-sufix[i];
            // if(val<0) return -1;
            if(mp.find(val)!=mp.end() and mp[val]<i)
            {
               ans=min(mp[val]+size-i+1,ans);
            }
        }
        if(ans==INT_MAX)
        return -1;
        else
        return ans;
    }
};
