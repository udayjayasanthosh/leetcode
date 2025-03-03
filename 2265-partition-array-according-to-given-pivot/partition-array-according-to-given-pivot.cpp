class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        int same=0;
        vector<int>greater;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                ans.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                greater.push_back(nums[i]);
            }
            else
            {
                same+=1;
            }
        }
        while(same>0)
        {
            ans.push_back(pivot);
            same--;
        }
        for(auto i:greater)
        {
            ans.push_back(i);
        }
        return ans;
    }
};