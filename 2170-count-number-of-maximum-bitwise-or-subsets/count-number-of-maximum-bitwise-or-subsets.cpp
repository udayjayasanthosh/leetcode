class Solution {
public:
    int count=0;
    void Counting(int val,int index,int&size,vector<int>&a,int&max)
    {
        if(index>=size)
        {
            if(val==max)
            {
                count++;
            }
            return;
        }
        Counting(val|a[index],index+1,size,a,max);
        Counting(val,index+1,size,a,max);
        
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int size=nums.size();
        int maxi=0;
        for(auto i:nums)
        {
            maxi=maxi|i;
        }
        Counting(0,0,size,nums,maxi);
        return count;
    }
};