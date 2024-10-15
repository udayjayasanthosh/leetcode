class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        long long ans=0;
        for(auto i:s)
        {
            if(i=='1')
            count+=1;
            else
            ans+=count;
        }
        count=0;
        long long ans1=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            count+=1;
            else
            ans1+=count;
        }
        if(ans<ans1)
        return ans;
        else
        return ans1;
    }
};