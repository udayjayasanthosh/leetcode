class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() and s.top()<nums2[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(auto i:nums1)
        {
            if(mp.find(i)!=mp.end())
            {
                v.push_back(mp[i]);
            }
            else
            {
                v.push_back(-1);
            }
        }
        return v;
    }
};