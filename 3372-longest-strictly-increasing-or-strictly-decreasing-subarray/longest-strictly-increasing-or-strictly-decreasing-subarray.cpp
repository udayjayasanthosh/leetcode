class Solution {
public:
    int longestMonotonicSubarray(vector<int>& num) {
        int a=num[0];
        int count=1;
        int ans=1;
        int size=num.size();
        for(int i=1;i<size;i++)
        {
            if(num[i]>a)
            {
                count++;
            }
            else
            {
                if(ans<count)
                {
                    ans=count;
                }
                count=1;
            }
            a=num[i];
        }
        if(count>ans)
        {
            ans=count;
        }
        count=1;
        a=num[size-1];
        for(int i=size-2;i>=0;i--)
        {
            if(num[i]>a)
            {
                count+=1;
            }
            else
            {
                if(count>ans)
                {
                    ans=count;
                }
                count=1;
            }
            a=num[i];
        }
        if(count>ans)
        {
            ans=count;
        }
        return ans;
    }
};