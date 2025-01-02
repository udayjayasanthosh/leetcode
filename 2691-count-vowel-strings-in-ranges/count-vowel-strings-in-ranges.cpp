class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>v;
        unordered_set<char>s;
        s.insert('a');
        s.insert('e');
        s.insert('i');
        s.insert('o');
        s.insert('u');
        for(auto i:words)
        {
            int size=i.size()-1;
            if(s.find(i[0])!=s.end() and s.find(i[size])!=s.end())
            v.push_back(1);
            else
            v.push_back(0);
        }
        vector<int>ans;
        int sum=0;
        for(auto i:v)
        {
            sum+=i;
            ans.push_back(sum);
        }
        vector<int>o;
        for(auto i:queries)
        {
            if(v[i[0]]!=0)
            o.push_back(ans[i[1]]-ans[i[0]]+1);
            else
            o.push_back(ans[i[1]]-ans[i[0]]);
        }
        return o;
    }
};