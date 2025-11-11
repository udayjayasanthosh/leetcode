class Solution {
    public int maxProduct(int[] nums) {
        int maxi=0;
        int maxi2=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>maxi)
            {
                maxi2=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>maxi2)
            {
                maxi2=nums[i];
            }
        }
        return (maxi-1)*(maxi2-1);
    }
}