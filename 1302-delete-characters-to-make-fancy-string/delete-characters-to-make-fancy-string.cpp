class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int size=0;
        for(auto i:s)
        {
            if(size<=1)
            {
                ans+=i;
                size+=1;
            }
            else
            {
                if(ans[size-1]==ans[size-2] and ans[size-1]==i)
                {
                    continue;
                }
                else
                {
                    ans+=i;
                    size+=1;
                }
            }
        }
        return ans;
    }
};