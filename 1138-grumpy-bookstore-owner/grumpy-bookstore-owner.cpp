class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int size=customers.size();
        int s=0;
        for(int i=0;i<size;i++)
        {
            if(grumpy[i]==0)
            s+=customers[i];
        }
        int maxi=0;
        int a=0;
        for(int i=0;i<minutes;i++)
        {
            if(grumpy[i]==1)
            a+=customers[i];
        }
        // cout<<a;
        if(a>maxi)
        maxi=a;
        for(int i=minutes;i<size;i++)
        {
            if(grumpy[i-minutes]==1)
            a-=customers[i-minutes];
            if(grumpy[i]==1)
            a+=customers[i];
            if(a>maxi)
            maxi=a;
        }
        return s+maxi;
    }
};