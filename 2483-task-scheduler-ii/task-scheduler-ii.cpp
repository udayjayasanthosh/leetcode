class Solution {
public:
 
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int,long long>mp;
        long long days=0;
        for(int i=0;i<tasks.size();i++)
        {
            if(mp.find(tasks[i])==mp.end())
            {
                days++;
                mp[tasks[i]]=days;
            }
            else
            {
                days++;
                long long a=days-(mp[tasks[i]]+1);
                if(a<space)
                {
                    days=days+(space-a);
                }
                mp[tasks[i]]=days;
            }
        }
        return days;
    }
};