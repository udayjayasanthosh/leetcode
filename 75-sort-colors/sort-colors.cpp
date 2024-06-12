class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int min=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[min])
                {
                    int t=nums[min];
                    nums[min]=nums[j];
                    nums[j]=t;
                }
            }
        }
    }
};