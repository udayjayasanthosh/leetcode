class Solution {
public:
    int minOperations(vector<int> nums) {
        int i=0;
        int a=0;
        int size=nums.size();
        while(i<size)
        {
            if(nums[i]==0)
            {
                int j=i+3;
                a++;
                for(int k=i;j<=size and k<j;k++)
                {
                    if(nums[k]==1)
                    nums[k]=0;
                    else
                    nums[k]=1;
                }
            }
            i++;
        }
        int s=0;
        for(int i=0;i<size;i++)
        {
            s+=nums[i];
            // cout<<nums[i];
        }
        if(s!=size)
        return -1;
        else
        return a;
    }
};