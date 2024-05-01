class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int size=word.size();
        string s="";
        for(int j=0;j<size;j++)
        {
            if(word[j]==ch)
            {
                s=word[j]+s;
                i=j+1;
                break;
            }
           s=word[j]+s;
        }
        if(i==0)
        s="";
        for(int j=i;j<size;j++)
        {
            s+=word[j];
        }
        return s;
    }
};