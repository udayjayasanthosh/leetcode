class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            int aa= nums[nums[i]];
            a.push_back(aa);
        }
        return a;
    }
};