class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        for(auto i:nums)
        {
            if(i<0)
            neg+=1;
            else if(i>0)
            pos+=1;
        }
        return max(pos,neg);
    }
};