class Solution {
public:
    set<vector<int>>a;
    void combi(vector<int>&help,vector<int>&b,int i,int size,int target,int sum)
    {
        if(sum==target)
        {
            a.insert(help);
            return;
        }
        else if(sum>target || i>=size)
        {
            return;
        }
        help.push_back(b[i]);
        combi(help,b,i+1,size,target,sum+b[i]);
        while(i+1<size && b[i]==b[i+1])
        {
            i++;
        }
        help.pop_back();
        combi(help,b,i+1,size,target,sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>help;
        vector<vector<int>>b;
        sort(candidates.begin(),candidates.end());
        combi(help,candidates,0,candidates.size(),target,0);
        for(auto it:a)
        {
            b.push_back(it);
        }
        return b;
    }
};