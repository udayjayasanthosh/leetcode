class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            int s= intervals[i][0];
            int e=intervals[i][1];
            if(!ans.empty() and e<=ans.back()[1]){
                continue;
            }
            else{
                for(int j=i+1;j<intervals.size();j++){
                    if(intervals[j][0]<= e){
                        e=max(e,intervals[j][1]);
                    }
                    else{
                        break;
                    }
                }
            }
            ans.push_back({s,e});
        }
        return ans;
}

};