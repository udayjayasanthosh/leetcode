class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>a;
        int c=nums.size();
        while(!nums.empty())
        {
            vector<int>v;
            unordered_map<int,int>mp;
            for (auto it = nums.begin(); it != nums.end();) {
                if (mp.find(*it) == mp.end())
                 {
                    mp[*it] = 1;
                    v.push_back(*it);
                    it = nums.erase(it);
                } 
                else {
                    ++it;
                }

            }
            a.push_back(v);
        }
        return a;
    }
};