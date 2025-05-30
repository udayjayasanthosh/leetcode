class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int size=edges.size();
        vector<int>e1(size,-1);
        vector<int>e2(size,-1);
        int maxi;
        int mini;
        int count=0;
        int ans=-1;
        while(node1!=-1 and e1[node1]==-1)
        {
            e1[node1]=count;
            count++;
            node1=edges[node1];
        }
        count=0;
        while(node2!=-1 and e2[node2]==-1)
        {
            e2[node2]=count;
            count++;
            node2=edges[node2];
        }
        for(int i=0;i<size;i++)
        {
            if(e1[i]!=-1 and e2[i]!=-1)
            {
                maxi=max(e1[i],e2[i]);
                if(maxi<mini)
                {
                    mini=maxi;
                    ans=i;
                }
            }
        }
        return ans;
    }
};