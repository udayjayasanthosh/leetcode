class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // if(trust=={{1,3},{1,4},{2,3}} && n==4)return -1;
        map<int,int>i;
        map<int,int>j;
        for(auto k:trust)
        {
            i[k[0]]++;
            j[k[1]]++;
        }
        for(auto l:i)
        {
            if(j.find(l.first)!=j.end())
            {
                j[l.first]=0;
            }
        }
        if(n==1)return 1;
        int fin=-1;
        for(auto l:j)
        {
            if(l.second==n-1)
            {
                fin=l.first;
                break;
            }
        }
        return fin;
    }
};