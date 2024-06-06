class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int size=nums.size();
        int c=0;
        for(int i=0;i<size-3;i++)
        {
            for(int j=i+1;j<size-2;j++)
            {
                for(int k=j+1;k<size-1;k++)
                {
                    for(int z=k+1;z<size;z++)
                    {
                        if(nums[i]+nums[j]+nums[k]==nums[z])
                        c++;
                    }
                }
            }
        }
        return c;
    }
};