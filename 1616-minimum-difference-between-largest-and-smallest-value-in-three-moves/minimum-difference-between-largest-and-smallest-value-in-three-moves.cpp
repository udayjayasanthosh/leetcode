class Solution {
public:
    int minDifference(vector<int> nums) {
        int size=nums.size();
        if(size<=4)return 0;
        else
        {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0;i<3;i++)
        {
            for(int j=size-4+i;j<size;j++)
            {
                if(i<j)
                v.push_back((nums[j]-nums[i]));
            }
        }
        int k=0;
        for(int j=size-1;j>=size-4;j--)
        {
            for(int i=3-k;i>=0;i--)
            {
                if(j>i)
                v.push_back(abs(nums[j]-nums[i]));
                k++;
            }
        }
        return *min_element(v.begin(),v.end());
        }
    }
};