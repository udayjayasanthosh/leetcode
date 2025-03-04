class Solution {
public:
    bool ans=false;
    void checking(int &n,int sum,vector<int>&v,int index,int &count)
    {
        if(sum==n)
        {
            ans=true;
            return;
        }
        if(index>count)
        {
            return;
        }
        checking(n,sum+v[index],v,index+1,count);
        checking(n,sum,v,index+1,count);
    }
    bool checkPowersOfThree(int n) {
        if(n==0) return false;
        int a=1;
        int count=0;
        vector<int>v;
        v.push_back(1);
        while(a*3<=n)
        {
            a=a*3;
            if(a==n)
            return true;
            v.push_back(a);
            count++;
        }
        checking(n,0,v,0,count);
        return ans;
    }
};