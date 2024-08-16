class Solution {
public:
    int maxDistance(vector<vector<int>> arrays) {
        vector<pair<int,int>>min;
        vector<pair<int,int>>max;
        int it=0;
        for(auto i:arrays)
        {
            pair<int,int>p;
            p.first=i.front();
            p.second=it;
            min.push_back(p);
            p.first=i.back();
            p.second=it;
            max.push_back(p);
            it+=1;
        }
        sort(min.begin(),min.end());
        sort(max.rbegin(),max.rend());
        int a=min[0].first;
        int b=min[0].second;
        it=0;
        if(b==max[it].second and it<max.size())
        {
            it+=1;
        }
        int one = 0;
        if(it<max.size())
        one=max[it].first-a;
        a=max[0].first;
        b=max[0].second;
        it=0;
        if(b==min[it].second and it<min.size())
        {
            it+=1;
        }
        int two=0;
        if(it<min.size())
        two=a-min[it].first;
        if(one<two)
        return two;
        return one;
    }
};