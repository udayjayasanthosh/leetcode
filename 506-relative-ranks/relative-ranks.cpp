class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>a=score;
        sort(a.rbegin(),a.rend());
        unordered_map<int,string>mp;
        for(int i=3;i<n;i++)
        {
            mp[a[i]]=to_string(i+1);
        }
        if(n>0)mp[a[0]]="Gold Medal";
        if(n>1)mp[a[1]]="Silver Medal";
        if(n>2)mp[a[2]]="Bronze Medal";
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(mp[score[i]]);
        }
        return v;


    }
};