class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int star=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                open++;
            }
            else if(i==')')
            {
                if(open>0)
                {
                    open--;
                }
                else if(star>0)
                {
                    star--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                star++;
            }
        }
        if(open>0)
        {
            open=0;
            star=0;
            int close=0;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]==')')
                {
                    close++;
                }
                else if(s[i]=='(')
                {
                    if(close>0)
                    {
                        close--;
                    }
                    else if(star>0)
                    {
                        star--;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    star++;
                }
            }
            return true;
        }
        else
        {
            return true;
        }
    }
};