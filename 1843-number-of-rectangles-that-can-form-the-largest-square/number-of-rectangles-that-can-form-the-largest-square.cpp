class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        pair<int,int>p;
        p.first=0;
        p.second=0;
        for(int i=0;i<rectangles.size();i++)
        {
            int a=min(rectangles[i][0],rectangles[i][1]);
            if(a==p.first)
            {
                p.second++;
            }
            else if(a>p.first)
            {
                p.first=a;
                p.second=1;
            }
        }
        return p.second;
    }
};