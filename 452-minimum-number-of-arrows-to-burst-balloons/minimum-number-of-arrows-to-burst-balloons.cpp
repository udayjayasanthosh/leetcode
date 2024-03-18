 bool cmp(vector<int> &x,vector<int> &y){
    return x[1]<y[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int b=points[0][1];
        int count=1;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]>b)
            {
                count++;
                b=points[i][1];
            }
        }
        return count;

    }
};