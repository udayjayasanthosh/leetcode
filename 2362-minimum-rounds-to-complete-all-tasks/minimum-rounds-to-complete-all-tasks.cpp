class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int count=0;
        for(auto i:tasks)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second<2)
            return -1;
            else if(i.second%3!=0)
            count+=(i.second/3)+1;
            else
            count+=(i.second/3);
        }
        return count;
    }
};