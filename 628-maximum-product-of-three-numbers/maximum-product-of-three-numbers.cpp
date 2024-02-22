class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int b=nums.size()-1;
        int a=nums[b];
        a=a*nums[b-1];
        a=a*nums[b-2];
        int c=0;
        if(nums[0]<0 && nums[1]<0)
        {
        c=nums[0];
        c=c*nums[1];
        c=c*nums[b];
        }
        if(a>c)return a;
        else
        return c;

    }
};