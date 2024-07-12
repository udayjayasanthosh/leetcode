class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int count=0;
        char pre;
        char next;
        if(x>y)
        {
            pre='a';
            next='b';
        }
        else
        {
            pre='b';
            next='a';
            int c=x;
            x=y;
            y=c;
        }
        for(auto i:s)
        {
            if(i==next and !st.empty() and st.top()==pre)
            {
                count+=x;
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
        stack<char>sta;
        while(!st.empty())
        {
             if(st.top()==next and !sta.empty() and sta.top()==pre)
            {
                count+=y;
                sta.pop();
            }
            else
            {
                sta.push(st.top());
            }
            st.pop();
        }
        return count;
    }
};