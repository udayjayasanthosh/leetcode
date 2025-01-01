class Solution {
public:
    int maxScore(string s) {
        int one=0;
        int zero=0;
        int score=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                one+=1;
            }
        }
        cout<<one;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1'){
                one-=1;
            }
            else{
                zero+=1;
            }
            if(zero+one>score)
            score=(zero+one);
        }   
        return score;
    }
};