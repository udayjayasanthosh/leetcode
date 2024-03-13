class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int mid=n/2;
        int sum=(n*(n+1))/2;
        cout<<sum<<"++"<<endl;
        for(int i=mid;i<n;i++)
        {
            int a=(i*(i+1))/2;
            cout<<a<<"--"<<endl;
            if(a==sum+i-a)return i;
        }
        return -1;
    }
};