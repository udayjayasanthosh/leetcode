class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>help;
        help.push_back(2);
        help.push_back(3);
        help.push_back(5);
        priority_queue<long, vector<long>, greater<long> > pq; 
        unordered_set<long>s;
        pq.push(1);
        long ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=pq.top();
            pq.pop();
            for(auto i:help)
            {
                long h=i*ans;
                if(s.find(h)==s.end())
                {
                    pq.push(h);
                    s.insert(h);
                }

            }
        }
        return (int) pq.top();
    }
};