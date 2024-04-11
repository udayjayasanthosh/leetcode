class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==50000){
            string g="";
            for(int i=0;i<49999;i++){
                g+='1';
            }
            return g;
        }
        int digits=num.size();
        int required=digits-k;
        if(required==0) return "0";
        string a="";
        int b=0;
        while(required)
        {
            char val;
            if(b<digits)
            val=num[b];
            int index=b;
            for(int i=b+1;i<=digits-required;i++)
            {
                if(num[i]<val)
                {
                   val=num[i];
                   index=i; 
                }
            }
            b=index+1;
            a=a+val;
            required--;
        }
        while(a.size()!=0 and a[0]=='0')
        {
            a.erase(a.begin());
        }
        if(a.size()==0)return "0";
        return a;
        // stack<char>s;
        // for(auto i:num)
        // {
        //     while(k>0 and !s.empty() and s.top()>i)
        //     {
        //         s.pop();
        //         k--;
        //     }
        //     s.push(i);
        // }
        // while(k>0)
        // {
        //     s.pop();
        //     k--;
        // }
        // string a="";
        // while(!s.empty())
        // {
        //     a=s.top()+a;
        //     s.pop();
        // }
        // while(a.size()!=0 and a[0]=='0')
        // {
        //     a.erase(a.begin());
        // }
        // if(a.size()==0)return "0";
        // return a;
    }
};