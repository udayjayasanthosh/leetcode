class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size()-1;i++)
        {
            mp[s[i]]++;
            for(int j=i+1;j<s.size();j++)
            {
                mp[s[j]]++;
                int a=INT_MAX;
                int b=0;
                for(auto i:mp)
                {
                    if(i.second>b)
                    b=i.second;
                    if(i.second<a)
                    a=i.second;
                }
                sum+=(b-a);
            } 
            mp.clear();
        }
        return sum;
    }
};