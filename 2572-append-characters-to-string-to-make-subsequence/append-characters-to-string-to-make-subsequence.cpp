class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size())
        {
            if(t[j]==s[i] and j<t.size())
            {
                j++;
            }
            i++;
        }
        return t.size()-j;
    }
};