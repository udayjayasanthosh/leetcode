class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if((count==2 or count==0) and s1==s2)
        {
            return true;
        }
        return false;
    }
};