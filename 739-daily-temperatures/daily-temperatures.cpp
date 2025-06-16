class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v;
        stack<pair<int,int>>s;
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            while(!s.empty() and s.top().first<=temperatures[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                v.push_back(s.top().second-i);
            }
            else
            {
                v.push_back(0);
            }
            s.push({temperatures[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
};