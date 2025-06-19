class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int count=0;
        while(i<j and j<nums.size())
        {
            if(nums[j]-nums[i]>k)
            {
                i=j;
                count+=1;
            }
            j+=1;
        }
        if(nums[j-1]-nums[i]<=k)
        {
            count+=1;
        }
        return count;
    }
};