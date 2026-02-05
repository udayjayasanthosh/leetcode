class Solution {
    public int[] constructTransformedArray(int[] nums) {
        int[] ans=new int[nums.length];
        int length=nums.length;
        for(int i=0;i<length;i++)
        {
            if(nums[i]>0)
            {
                ans[i]=nums[(i+nums[i])%length];
            }
            else
            {
                int value=(nums[i]*-1)%length;
                if(value>i)
                {
                    value-=i;
                    ans[i]=nums[length-value];
                }
                else
                {
                    ans[i]=nums[i-value];
                }
            }
        }
        return ans;
    }
}