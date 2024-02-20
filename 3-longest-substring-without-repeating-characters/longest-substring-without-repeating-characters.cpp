class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,ma=0,l=s.size();
        for(i=0;i<l;i++){
            map<char,int>con;
            for(j=i;j<l;j++){
                con[s[j]]++;
                if(con[s[j]]>1){
                    if(con.size()>ma)ma=con.size();
                    break;
                }
            }
            if(con.size()>ma)ma=con.size();
            if(ma==l)break;
        }
        return ma;

    }
};