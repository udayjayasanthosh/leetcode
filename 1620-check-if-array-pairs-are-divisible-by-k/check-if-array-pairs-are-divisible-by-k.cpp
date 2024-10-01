class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int count=0;
        for(auto i:arr)
        {
            int a=((i % k) + k) % k;
            mp[a]++;
        }
        // for(auto i:mp)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i=1;i<(k/2)+1;i++)
        {
            if(mp[i]==mp[k-i])
            {
                if(i==k-i and mp[i]%2==0)
                {
                    count+=mp[i]/2;
                }
                else if(i!=k-i)
                {
                    count+=mp[i];
                }
                // cout<<i<<":"<<mp[i]<<" "<<k-i<<":"<<mp[k-i]<<" "<<count<<endl;
            }
        }
        if(mp[0]%2==0)
        {
            count+=mp[0]/2;
            // cout<<mp[0]<<" "<<endl;
        }
        else
        {
            return false;
        }
        // cout<<count;
        if(count==arr.size()/2)
        return true;
        else
        return false;
    }
};