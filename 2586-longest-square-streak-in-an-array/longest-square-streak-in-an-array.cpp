class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>mp;
        // return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=-1;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n-1;i++)
        {
            if(pow(nums[i],2)>2147483647)
            break;
            int p=nums[i]*nums[i];
            if(mp[p]!=0)
            {
                int h=2;
                int j=mp[p];
                mp[p]=0;
                while(j<n-1)
                {
                    if(pow(p,2)>2147483647)
                    break;
                    long pp=p*p;
                    if(mp[pp]!=0)
                    {
                        h++;
                        j=mp[pp];
                        p=pp;
                        mp[pp]=0;
                    }
                    else
                    break;
                }
                if(h>k)
                {
                    k=h;
                }
            }

        }
        return k;
    }
};