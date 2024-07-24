class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            long long b=0;
            int count=1;
            if(a==0)
            b=mapping[0]*10;
            while(a>0)
            {
                int rem=a%10;
                b=(mapping[rem]*pow(10,count))+b;
                count+=1;
                a=a/10;
            }
            b=b/10;
            vector<int>p;
            p.push_back(b);
            p.push_back(i);
            p.push_back(nums[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto i:v)
        {
            ans.push_back(i[2]);
        }
        return ans; 
    }
};