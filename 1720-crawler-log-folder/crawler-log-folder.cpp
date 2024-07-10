class Solution {
public:
    int minOperations(vector<string>& logs) {
        int a=0;
        for(auto i:logs)
        {
            if(i!="../" and i!="./")
            {
                a++;
            }
            else if(i=="../")
            {
                if(a>0)
                a--;
            }
        }
        if(a<=0)
        return 0;
        else
        return a;
    }
};