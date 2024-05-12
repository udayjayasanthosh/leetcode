class Solution {
public:
    long long maximumSumOfHeights(vector<int> ha) {
        // int max=0;
        // int pos=-1;
        vector<int>v;
        int n=ha.size();
        long long sa=0;
        // int max=*max_element(ha.begin(),ha.end());
        for(int pos=0;pos<n;pos++)
        {
            vector<int>h=ha;
            long long s=0;
            for(int i=pos;i>0;i--)
            {
                if(h[i]<h[i-1])
                {
                    h[i-1]=h[i];
                }
                s=s+h[i-1];
            }
            for(int i=pos;i<n-1;i++)
            {
                if(h[i]<h[i+1])
                {
                    h[i+1]=h[i];
                }
                s=s+h[i+1];
            }
            s=s+h[pos];
            if(s>sa)
            sa=s;
        }
        return sa;
    }
};