class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int ans=0;
        int n=nums.size()/2;
        int current=1;
        int prev=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==prev)
            {
                current++;
            }
            else 
            {
                current=1;
            }
            if(current==n)
            {
                return nums[i];
            }
            prev=nums[i];
        }
        return 0;
    }
};