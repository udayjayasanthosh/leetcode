class Solution {
public:
    int minIncrementForUnique(vector<int>&nums) {
       map<int,int>mp;
        unordered_set<int>s;
       for(auto i:nums)
       {
        mp[i]++;
        s.insert(i);
       }
        int count=0;
        int d=*min_element(nums.begin(),nums.end());
       for(auto i:mp)
       {
            int a=i.second;
            int b=i.first;
            int c=d;
            if(b<c)
            c=d;
            else
            c=b;
            a--;
            while(a)
            {
                c++;
                while(s.find(c)!=s.end())
                {
                    c++;
                }
                int h=c-b;
                count+=h;
                s.insert(c);
                a--;
            }
            d=c;
       }
       return count;
    }
};