class Solution {
public:
    string customSortString(string order, string s) {
        map<int,int>mp;
        vector<char>v;
        cout<<mp[0];
        for(int i=0;i<order.size();i++)
        {
            mp[order[i]]=i;
        }
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]);
        }
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=0;j<s.size()-i-1;j++)
            {
                if(mp[v[j]]>mp[v[j+1]])
                {
                    char a=v[j+1];
                    v[j+1]=v[j];
                    v[j]=a;
                }
            }
        }
        string a="";
        for(auto i:v)
        {
            a=a+i;
        }
        return a;
    }
};