class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profit, vector<int>& capital) {
        vector<pair<int,int>>v;
        int n=profit.size();
        for(int i=0;i<n;i++)
        {
            pair<int,int>p;
            p.first=capital[i];
            p.second=profit[i];
            v.push_back(p);
        }
        int j=0;
        sort(v.begin(),v.end());
        priority_queue<int>pq;
        for(int i=0;i<k;i++)
        {
            while(j<n and v[j].first<=w)
            {
                pq.push(v[j].second);
                j++;
            }
            if(pq.empty())
            break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};