class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int> worker) {
        vector<pair<int,int>>v;
        int size=difficulty.size();
        for(int i=0;i<size;i++)
        {
            pair<int,int>p;
            p.first=difficulty[i];
            p.second=profit[i];
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        int count=0;
        int maxi=0;
        int j=0;
        int k=0;
        for(int i=0;i<worker.size();i++)
        {
            int a=worker[i];
            if(j==size)
            { count+=maxi;
            k++;
            }
            while(j<size)
            {
                if(v[j].first>a)
                {
                    count+=maxi;
                    k++;
                    break;
                }
                else
                {
                    if(v[j].second>maxi)
                    maxi=v[j].second;
                    j++;
                }
            }
        }
        if(k<worker.size()) count+=maxi;
        return count;
    }
};