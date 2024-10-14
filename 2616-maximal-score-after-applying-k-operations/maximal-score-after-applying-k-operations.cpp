class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq; 
        long long ans=0;
        for(auto i:nums)
        {
            pq.push(i);
        }
        while(k)
        {
            ans+=pq.top();
            int a=pq.top();
            pq.pop();
            if(a%3==0)
            pq.push(a/3);
            else
            pq.push(ceil(a/3)+1);
            k--;
        }
        return ans;
    }
};