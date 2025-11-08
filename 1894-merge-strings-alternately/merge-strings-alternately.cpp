class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int W1=word1.size();
        int W2=word2.size();
        int maxi=max(W1,W2);
        for(int i=0;i<maxi;i++)
        {
            if(i<W1)
            ans=ans+word1[i];
            if(i<W2)
            ans=ans+word2[i];
        }
        return ans;
    }
};