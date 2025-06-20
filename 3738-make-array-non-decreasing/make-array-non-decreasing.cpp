class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int>s;
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!s.empty() and s.top()<nums[i])
            {
                s.pop();
            }
            s.push(nums[i]);
        }
        return s.size();
    }
};