class Solution {
public:
    bool can(int mid,vector<int>&candies,long long &k)
    {
        long long count=0;
        for(auto i:candies)
        {
            count+=i/mid;
        }
        if(count>=k)
        return true;
        else
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int left=1;
        int right=*max_element(candies.begin(),candies.end());
        int result=0;
        if(!can(left,candies,k)) return 0;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(can(mid,candies,k))
            {
                result=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return result;
    }
};