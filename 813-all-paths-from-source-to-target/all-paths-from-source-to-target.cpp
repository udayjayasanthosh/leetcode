class Solution {
public:
    vector<vector<int>>all;
    void fun(vector<vector<int>>&graphs,int &desti,int i,vector<int>v)
    {
        if(desti==i)
        {
            v.push_back(i);
            all.push_back(v);
            return;
        }
        v.push_back(i);
        for(int j=0;j<graphs[i].size();j++)
        {
            fun(graphs,desti,graphs[i][j],v);
        }

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graphs) {
        int desti=graphs.size()-1;
        fun(graphs,desti,0,{});
        return all;

    }
};