class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        string a="";
        for(auto i:s)
        {
            if(i!='(' and i!=')')
            {
                a+=i;
            }
            else if(i=='(')
            {
                open++;
                a+=i;
            }
            else if(open >0)
            {
                open--;
                a+=i;
            }
        }
        if(open>0)
        {
        int size=a.size()-1;
        string b="";
        int close=0;
        for(int i=size;i>=0;i--)
        {
            if(a[i]!='(' and a[i]!=')')
            {
                b+=a[i];
            }
            else if(a[i]==')')
            {
                close++;
                b+=a[i];
            }
            else if(close>0)
            {
                close--;
                b+=a[i];
            }
        }
        reverse(b.begin(),b.end());
        return b;
        }
        else
        {
            return a;
        }
    }
};