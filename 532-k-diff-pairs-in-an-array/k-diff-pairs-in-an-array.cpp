class Solution {
public:
    int findPairs(vector<int>& num, int k) {
        int c = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < num.size(); i++) {
                mp[num[i]]++;
            }
        if (k != 0) {
            vector<int> nums;
            for (auto i : mp) {
                nums.push_back(i.first);
            }
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size() - 1; i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] - nums[i] == k) {
                        c++;
                    }
                    if (nums[j] - nums[i] > k) {
                        break;
                    }
                }
            }
        } else {
            // sort(num.begin(), num.end());
            // for (int i = 0; i < num.size() - 1; i++) {
            //     for (int j = i + 1; j < num.size(); j++) {
            //         if (num[j] - num[i] == k) {
            //             c++;
            //         }
            //         if (num[j] - num[i] > k) {
            //             break;
            //         }
            //     }
            // }
            for(auto i:mp)
            {
                if(i.second>=2)
                {
                    c++;
                }
            }
        }
        return c;
    }
};