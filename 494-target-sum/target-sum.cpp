class Solution {
public:
    int a=0;
    void func(vector<int>&nums,int i,int &target,int sum,int &size)
    {
        if(sum==target and i>=size)
        {
            a=a+1;
            return;
        }
        if(i>=size)return;
        func(nums,i+1,target,sum+nums[i],size);
        func(nums,i+1,target,sum-nums[i],size);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        // return 0;
        int size=nums.size();
        if(size==0)return 0;
        int sum=0;
        func(nums,0,target,sum,size);
        return a;
    }
};