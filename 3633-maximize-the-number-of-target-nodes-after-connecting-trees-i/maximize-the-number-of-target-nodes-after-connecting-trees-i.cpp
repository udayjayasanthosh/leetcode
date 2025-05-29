class Solution {
public:
    void depting(unordered_map<int,vector<int>>&mp,int root,vector<int>&visited,int &limit,int val,int &number)
    {
        if(val>=limit) return;
        for(auto i:mp[root])
        {
            if(visited[i]==0)
            {
                visited[i]=1;
                number+=1;
                depting(mp,i,visited,limit,val+1,number);
            }
        }

    }
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        unordered_map<int,vector<int>>g1;
        unordered_map<int,vector<int>>g2;
        for(auto i:edges1)
        {
            g1[i[0]].push_back(i[1]);
            g1[i[1]].push_back(i[0]);
        }
        int g1size=g1.size();
        vector<int>ans(g1size,0);
        for(auto i:edges2)
        {
            g2[i[0]].push_back(i[1]);
            g2[i[1]].push_back(i[0]);
        }
        int max2=0;
        int g2size=g2.size();
        int limit=k-1;
        for(auto i:g2)
        {
            vector<int>visited(g2size,0);
            visited[i.first]=1;
            int val=0;
            int number=0;
            if(limit>=0)
            number=1;
            depting(g2,i.first,visited,limit,val,number);
            if(number>max2)
            max2=number;
        }
        limit+=1;
        for(auto i:g1)
        {
            vector<int>visited(g1size,0);
            visited[i.first]=1;
            int val=0;
            int number=1;
            depting(g1,i.first,visited,limit,val,number);
            // cout<<i.first<<" "<<number<<" "<<max2<<endl;
            ans[i.first]=number+max2;
        }
        return ans;
    }
};