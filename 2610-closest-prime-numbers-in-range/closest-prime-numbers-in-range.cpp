class Solution {
public:
    vector<int> Sieve(int a)
    {
        vector<int>v(a+1,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i*i<a+1;i++)
        {
            if(v[i]==1)
            {
                for(int q=i*i;q<=a;q+=i)
                {
                    v[q]=0;
                }
            }
        }
        return v;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>v;
        v=Sieve(right);
        int a=-1;
        int b=-1;
        int prev=-1;
        int ans=100000000;
        for(int i=left;i<=right;i++)
        {
            if(v[i]==1)
            {
                if(prev==-1)
                {
                    prev=i;
                }
                else
                {
                    int help=(i-prev);
                    if(help<ans)
                    {
                        ans=help;
                        a=prev;
                        b=i;
                    }
                    prev=i;
                }
            }
        }
        return {a,b};
    }
};