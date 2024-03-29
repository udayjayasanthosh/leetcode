class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int a=*max_element(nums.begin(),nums.end());
        int i=0;
        int j=0;
        long long s=0;
        unordered_map<int,int>mp;
        while(i<n)
        {
            while(i<n and mp[a]<k)
            {
                mp[nums[i]]++;
                i++;
            }
            if(mp[a]==k)
            {
                s++;
                s=s+(n-i);
            }
            if(j<n)
            {
                mp[nums[j]]--;
                j++;
            }
        }
        while(j<n)
        {
            if(mp[a]==k)
            {
                s++;
                mp[nums[j]]--;
                j++;
            }
            else
            {
                break;
            }

        }
        // if(mp[a]==k)
        // {
        //     s++;
        // }
        return s;
    }
};