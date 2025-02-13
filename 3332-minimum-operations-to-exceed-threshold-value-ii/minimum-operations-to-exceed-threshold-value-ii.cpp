class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int, vector<long long int>, greater<long long int> > pq; 
        int count=0;
        for(auto i:nums)
        {
            pq.push(i);
        }
        while(pq.top()<k)
        {
           long long  int x=pq.top();
            pq.pop();
           long long int y=pq.top();
            pq.pop();
           long long int z=(min(x,y)*2)+max(x,y);
            pq.push(z);
            count++;
        }
        return count;
    }
};