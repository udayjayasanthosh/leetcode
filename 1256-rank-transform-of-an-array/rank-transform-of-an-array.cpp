class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>b=arr;
        sort(b.begin(),b.end());
        unordered_map<int,int>mp;
        int count=1;
        for(auto i:b)
        {
            if(mp[i]==0)
            {
                mp[i]=count;
                count++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};