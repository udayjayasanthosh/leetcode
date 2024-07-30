class Solution {
public:
    string decodeMessage(string key, string message) {
        int count=97;
        unordered_map<char,char>mp;
        string ans="";
        mp[' ']=' ';
        for(auto i:key)
        {
            if(mp.find(i)==mp.end())
            {
                mp[i]=char(count);
                count+=1;
                // cout<<i<<" "<<char(count)<<endl;
            }
        }
        for(auto i:message)
        {
            ans+=mp[i];
        }
        return ans;
    }
};