class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<pair<int,string>>v;
        vector<string>ans;
        int size=words.size();
        for(auto i:words)
        {
            pair<int,string>p;
            p.first=i.size();
            p.second=i;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<size-1;i++)
        {
            string a=v[i].second;
            for(int j=i+1;j<size;j++)
            {
                if(v[i].first<v[j].first)
                {
                    string b=v[j].second;
                    if(b.find(a)!=string::npos)
                    {
                        ans.push_back(a);
                        break;
                    }

                }
            }
        }
        return ans;
    }
};