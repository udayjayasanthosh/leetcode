class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()<2)
        return true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]%2==0 and nums[i+1]%2==0)||(nums[i]%2==1 and nums[i+1]%2==1))
            return false;
        }
        return true;
    }
};