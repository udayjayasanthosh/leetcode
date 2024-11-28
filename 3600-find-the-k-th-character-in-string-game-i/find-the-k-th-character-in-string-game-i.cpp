class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        string ans="a";
        while(ans.size()<k)
        {
            string a="";
            for(int i=0;i<word.size();i++)
            {
                if(word[i]=='z')
                {
                    a+="a";
                }
                else
                {
                     a+=(char)word[i]+1;
                }
            }
            word+=a;
            ans+=a;
        }
        cout<<ans;
        return ans[k-1];
    }
};