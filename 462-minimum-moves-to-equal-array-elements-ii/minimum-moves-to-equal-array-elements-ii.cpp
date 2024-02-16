class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums.size()/2;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c+=abs(nums[i]-nums[a]);
        }
        return c;
    }
};