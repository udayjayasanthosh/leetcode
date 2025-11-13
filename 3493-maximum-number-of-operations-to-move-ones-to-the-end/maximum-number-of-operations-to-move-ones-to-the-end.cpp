class Solution {
public:
    int maxOperations(string s) {
        int onesCount=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                while(i<s.size() and s[i]=='0')
                {
                    i++;
                }
                i-=1;
                if(i<s.size())
                {
                    ans+=onesCount;
                }
            }
            else
            {
                onesCount+=1;
            }
        }
        return ans;
    }
};