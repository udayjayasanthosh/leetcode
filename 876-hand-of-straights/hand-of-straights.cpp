class Solution {
public:
    bool isNStraightHand(vector<int> hand, int groupsize) {
        sort(hand.begin(),hand.end());
        unordered_map<int,int>mp;
        for(auto i:hand)
        {
            mp[i]++;
        }
        int i=0;
        while(i<hand.size())
        {
            int size=groupsize-1;
            if(mp.size()<groupsize)
            return false;
            if(mp.size()==0)
            return true;
            int a=hand[i];
            mp[a]--;
            if(mp[a]==0) mp.erase(a);
            while(size)
            {
                if(mp.find(a+1)!=mp.end())
                {
                    a=a+1;
                    mp[a]--;
                    if(mp[a]==0) mp.erase(a);
                    size--;
                }
                else
                {
                    return false;
                }
            }
            while(i<hand.size() and mp.find(hand[i])==mp.end())
            {
                i++;
            }
        }
        return true;
    }
};