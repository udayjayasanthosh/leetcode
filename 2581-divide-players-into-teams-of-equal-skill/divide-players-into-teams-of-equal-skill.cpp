class Solution {
public:
    long long dividePlayers(vector<int> skill) {
        sort(skill.begin(),skill.end());
        int size=skill.size();
        int a=skill[0]+skill[size-1];
        long long ans=0;
        for(int i=0;i<size/2;i++)
        {
            if(skill[i]+skill[size-i-1]!=a)
            return -1;
            else
            ans+=(skill[i]*skill[size-i-1]);
        }
        return ans;
    }
};