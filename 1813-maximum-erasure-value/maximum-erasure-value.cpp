class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        vector<int> presum;
        unordered_map<int, int> mp;
        int ans = 0;
        int i = 0;
        for (int num : nums) {
            sum += num;
            presum.push_back(sum);
        }

        for (int j = 0; j < nums.size(); ++j) {
            if (mp.find(nums[j]) != mp.end() && mp[nums[j]] >= i) {
                i = mp[nums[j]] + 1;
            }
            mp[nums[j]] = j;

            int subSum = presum[j] - (i > 0 ? presum[i - 1] : 0);
            ans = max(ans, subSum);
        }

        return ans;
    }
};
