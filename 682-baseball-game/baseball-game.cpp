class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(operations[i]=="D")
            {
                int a=st.top();
                st.push(a*2);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else{
                string a=operations[i];
                int value=0;
                bool neg=false;
                for(auto i:a)
                {
                    if(i!='-')
                    value=(value*10)+(i-'0');
                    else
                    neg=true;
                }
                // cout<<value<<endl;
                if(neg)
                st.push(value*-1);
                else
                st.push(value);
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};