class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> pq;
        vector<vector<int>>ans;
        for (int i = 0; i < points.size(); i++) {
            int a = points[i][0];
            int b = points[i][1];
            int ans = (a * a) + (b * b);
            if (pq.size() >= k and pq.top().first >= ans) {
                pq.pop();
                pair<int, int> p;
                p.first = ans;
                p.second = i;
                pq.push(p);
            } else if (pq.size()<k) {
                pair<int, int> p;
                p.first = ans;
                p.second = i;
                pq.push(p);
            }
        }
        while(!pq.empty())
        {
            int top=pq.top().second;
            ans.push_back(points[top]);
            pq.pop();
        }
        return ans;
    }
};