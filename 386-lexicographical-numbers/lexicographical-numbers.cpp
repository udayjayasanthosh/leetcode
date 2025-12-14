class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>v;
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            string a=to_string(i);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(auto i:v)
        {
            int value=stoi(i);
            ans.push_back(value);
        }
        return ans;
    }
};