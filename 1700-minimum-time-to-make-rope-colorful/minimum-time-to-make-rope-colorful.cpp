class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char prev=colors[0];
        int prevTime=neededTime[0];
        int ans=0;
        for(int i=1;i<colors.size();i++)
        {
            if(prev!=colors[i])
            {
                prev=colors[i];
                prevTime=neededTime[i];
            }
            else
            {
                int maxi=prevTime;
                int totalSum=prevTime;
                while(i<colors.size() and prev==colors[i])
                {
                    totalSum+=neededTime[i];
                    if(neededTime[i]>maxi)
                    {
                        maxi=neededTime[i];
                    }
                    i++;
                }
                i-=1;
                ans+=abs(totalSum-maxi);
            }
        }
        return ans;
    }
};