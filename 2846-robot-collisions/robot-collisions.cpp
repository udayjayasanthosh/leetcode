class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int> healths, string directions) {
        vector<vector<int>>v;
        for(int i=0;i<positions.size();i++)
        {
            vector<int>h(4,0);
            h[0]=positions[i];
            h[1]=healths[i];
            if(directions[i]=='L')
            h[2]=0;
            else
            h[2]=1;
            h[3]=i;
            v.push_back(h);
        }
        sort(v.begin(),v.end());
        stack<vector<int>>s;
        for(auto i:v)
        {
            if(s.empty())
            {
                s.push(i);
            }
            else
            {   
                if(s.top()[2]==i[2])
                {
                    s.push(i);
                }
                else
                {
                    int z=0;
                    while(z==0 and !s.empty() and s.top()[2]!=i[2])
                    {
                        if(s.top()[2]==0)
                        {
                            break;
                        }
                        else if(s.top()[1]<i[1])
                        {
                            healths[s.top()[3]]=0;
                            s.pop();
                            healths[i[3]]-=1;
                            i[1]-=1;
                        }
                        else if(s.top()[1]>i[1])
                        {
                            s.top()[1]-=1;
                            healths[s.top()[3]]-=1;
                            healths[i[3]]=0;
                            z=1;
                        }
                        else
                        {
                            healths[s.top()[3]]=0;
                            healths[i[3]]=0;
                            s.pop();
                            z=1;
                        }
                    }
                    if(z==0)
                    {
                        s.push(i);
                    }
                }
            }  
        }
        vector<int>ans;
        for(auto i:healths)
        {
            if(i!=0)
            {
                ans.push_back(i);
            }
        }
        return ans;

    }
};