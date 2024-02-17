class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>at;
        vector<int>ta;
        if(s.size()>=a.size())
        {
        for(int i=0;i<=s.size()-a.size();i++)
        {
            if(s[i]==a[0])
            {
                int j=i+1;
                int k=1;
                int c=1;
                while(k<a.size())
                {
                    if(s[j]==a[k])
                    {
                        c+=1;
                    }
                    else
                    {
                        k=a.size();
                    }
                    j++;
                    k++;
                }
                if(c==a.size())
                {
                    cout<<i;
                    at.push_back(i);
                }
                cout<<endl;
            }
        }
        }
        if(s.size()>=b.size())
        {
        for(int i=0;i<=s.size()-b.size();i++)
        {
            if(s[i]==b[0])
            {
                int j=i+1;
                int k=1;
                int c=1;
                while(k<b.size())
                {
                    if(s[j]==b[k])
                    {
                        c+=1;
                    }
                    else
                    {
                        k=b.size();
                    }
                    j++;
                    k++;
                }
                if(c==b.size())
                {
                    cout<<i;
                    ta.push_back(i);
                }
            }
        }
        }
        vector<int>va;
        for(int i=0;i<at.size();i++)
        {
            for(int j=0;j<ta.size();j++)
            {
                if(abs(at[i]-ta[j])<=k)
                {
                    va.push_back(at[i]);
                    break;
                }
            }
        }
        return va;

    }
};