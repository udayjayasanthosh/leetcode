class Solution {
public:
    bool check(vector<int>nums)
    {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        if(v==nums)
        return true;
        else
        return false;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;
        while(!check(nums))
        {
            int index=-1;
            int presum=INT_MAX;
            for(int i=0;i<nums.size()-1;i++)
            {
                int sum=nums[i]+nums[i+1];
                if(sum<presum)
                {
                presum=sum;
                index=i;
                }
            }
            count+=1;
            nums[index]=presum;
        //     for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
            nums.erase(nums.begin()+index+1,nums.begin()+index+2);
        //     for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        }
        return count;
    }
};