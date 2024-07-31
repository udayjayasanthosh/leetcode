class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int> special) {
        int count=0;
        int maxi=0;
        sort(special.begin(),special.end());
        for(int i=0;i<special.size()-1;i++)
        {
            int diff=special[i+1]-special[i]-1;
            if(diff>maxi)
            maxi=diff;
        }
        int diff=special[0]-bottom;
        // cout<<diff;
        if(diff>maxi)
        maxi=diff;
        diff=top-special[special.size()-1];
        // cout<<diff;
        if(diff>maxi)
        maxi=diff;
        return maxi;        
    }
};