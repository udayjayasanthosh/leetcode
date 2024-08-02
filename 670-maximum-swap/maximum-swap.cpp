class Solution {
public:
    int maximumSwap(int num) {
        vector<int>a;
        while(num>0)
        {
            int rem=num%10;
            num=num/10;
            a.push_back(rem);
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)
        {
            int b=*max_element(a.begin()+i+1,a.end());
            if(a[i]<b)
            {
                int c=a[i];
                for(int j=a.size()-1;j>i;j--)
                {
                    if(a[j]==b)
                    {
                        a[i]=a[j];
                        a[j]=c;
                        break;
                    }
                }
                break;
            }
        }
        int d=0;
        for(auto i:a)
        {
            d=d*10+i;
        }
        return d;
    }
};