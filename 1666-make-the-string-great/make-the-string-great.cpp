class Solution {
public:
    string makeGood(string s) {
        stack<char>sa;
        int h=s.size();
        if(h>0)
        sa.push(s[0]);
        for(int i=1;i<h;i++)
        {
            if(!sa.empty() and abs(s[i]-sa.top())==32)
            {
                sa.pop();
            }
            else
            {
                sa.push(s[i]);
            }
        }
        s="";
        while(!sa.empty())
        {
            s=sa.top()+s;
            sa.pop();
        }
        return s;
    }
};