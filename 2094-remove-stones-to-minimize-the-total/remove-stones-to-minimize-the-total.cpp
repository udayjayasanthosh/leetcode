class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>p;
        int s=0;
        for(int i=0;i<piles.size();i++)
        {
            p.push(piles[i]);
        }
        while(k)
        {
            int a=p.top()-floor(p.top()/2);
            p.pop();
            p.push(a);
            k--;
            cout<<a<<endl;
        }
        while(!p.empty())
        {
            s+=p.top();
            p.pop();
        }
        return s;
    }
};