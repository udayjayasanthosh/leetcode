class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        // k-=1;
        for(int i=1;i<=n;i++)
        v.push_back(i);
        int kk=k-1;
        while(n>1)
        {
            while(kk>=n)
            kk=kk-n;
            // cout<<kk;
            v.erase(v.begin()+kk);
            // for(int i=0;i<v.size();i++)
            // {
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;
            n-=1;
            kk=k+kk-1;
        }
        return v[0];
    }
};