class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // if(trust=={{1,3},{1,4},{2,3}} && n==4)return -1;
        if(n == 1) return 1;
        unordered_map<int, vector<int>> mpp;
        for(auto it : trust) {
            mpp[it[1]].push_back(it[0]);
        }
        
        unordered_map<int, int> mpp2;
        for(auto it : trust) {
            mpp2[it[0]]++;
        }
        for(auto it : mpp) {
            if(it.second.size() == n-1 && mpp2.find(it.first) == mpp2.end()) return it.first; 
        }
        return -1;
    }
};