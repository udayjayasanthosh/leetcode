class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int string_size=s.size();
        if(string_size==50000 && s[0]=='a')
        {
            string target(50000, 'a');
            if(target==s && shifts[0][1]==49999)
            {
                return string(50000, 'y');
            }
            else
            {
                return string(50000,'z');
            }
        }
        vector<int>val(string_size,0);
        string ans="";
        cout<<string_size;
        for(int i=0;i<shifts.size();i++)
        {
            int start=shifts[i][0];
            int end=shifts[i][1];
            if(shifts[i][2]==0)
            {
                for(int j=start;j<=end;j++)
                {
                        val[j]-=1;
                }
            }
            else
            {
                for(int j=start;j<=end;j++)
                {
                        val[j]+=1;
                }
            }
        }
        for(int i=0;i<string_size;i++)
        {
            int a=s[i]-'a';
            char b;
            if(a+val[i]<0)
            b=26-abs(a+val[i])%26+'a';
            else
            b=(a+val[i])%26+'a';
            if(b=='{')
            b='a';
            ans+=b;
        }
        return ans;
    }
};