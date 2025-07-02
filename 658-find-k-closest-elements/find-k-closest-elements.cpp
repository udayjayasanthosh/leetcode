class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            int a=abs(arr[i]-x);
            if(pq.size()>=k and pq.top().first>a)
            {
                pair<int,int>p;
                p.first=a;
                p.second=i;
                pq.pop();
                pq.push(p);
            }
            else if(pq.size()<k)
            {
                pair<int,int>p;
                p.first=a;
                p.second=i;
                pq.push(p);
            }
        }
        while(!pq.empty())
        {
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};