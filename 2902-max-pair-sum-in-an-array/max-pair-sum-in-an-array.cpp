class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int max = 0;
            while (a > 0) {
                int val = a % 10;
                a = a / 10;
                if (val > max)
                    max = val;
            }
            mp[max].push_back(nums[i]);
        }
        for (auto i : mp) {
            if (i.second.size() > 1) {
                vector<int> v = i.second;
                int size = i.second.size();
                sort(v.begin(), v.end());
                if (v[size - 1] + v[size - 2]>ans) {
                    ans=v[size - 1] + v[size - 2];
                }
            }
        }
        return ans;
    }
};