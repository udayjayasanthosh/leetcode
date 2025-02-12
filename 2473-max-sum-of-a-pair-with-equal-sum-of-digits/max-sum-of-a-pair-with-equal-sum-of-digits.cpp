class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>>mp;
        int ans=0;
        for(auto i:nums)
        {
            int a=i;
            int digits=0;
            while(a>0)
            {
                digits+=(a%10);
                a=a/10;
            }
            mp[digits].push(i);
        }
        for(auto i:mp)
        {
            priority_queue<int>pq=i.second;
            if(pq.size()>1)
            {
                int a=pq.top();
                pq.pop();
                int b=pq.top();
                if(ans<a+b)
                ans=a+b;
            }
        }
        if(ans>0)
        return ans;
        return -1;
    }
};