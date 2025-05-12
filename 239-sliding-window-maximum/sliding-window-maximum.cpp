class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        set<pair<int, int>> s;
        for (int i = 0; i < k; i++) {
            s.insert({nums[i], i});
        }
        vector<int> v;
        auto it = prev(s.end());
        v.push_back(it->first);
        for (int i = 0; i + k < nums.size(); i++) {
            s.erase({nums[i], i});
            s.insert({nums[i + k], i + k});
            cout<<i+k<<endl;
            auto it = prev(s.end());
            v.push_back(it->first);
        }
        return v;
    }
};