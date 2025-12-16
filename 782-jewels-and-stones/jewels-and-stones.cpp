class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        int count=0;
        for(auto i:stones)
        {
            mp[i]++;
        }
        for(auto i:jewels)
        {
            count+=mp[i];
        }
        return count;
    }
};