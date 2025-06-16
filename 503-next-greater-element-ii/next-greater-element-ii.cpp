class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size=nums.size();
        vector<int>v;
        stack<int>s;
        for(int i=0;i<size;i++)
        {
            nums.push_back(nums[i]);
        }
        for(int i=(size*2)-1;i>=size;i--)
        {
            while(!s.empty() and s.top()<nums[i])
            {
                s.pop();
            }
            s.push(nums[i]);
        }
        for(int i=size-1;i>=0;i--)
        {
             while(!s.empty() and s.top()<=nums[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                v.push_back(s.top());
            }
            else
            {
                v.push_back(-1);
            }
            s.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};