class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int sum=0;
        int count=0;
        vector<long long int>v;
        for(auto i:nums)
        {
            sum+=i;
            v.push_back(sum);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            long long int a=sum-v[i];
            if(v[i]>=a)
            {
                count+=1;
            }
        }
        return count;
    }
};