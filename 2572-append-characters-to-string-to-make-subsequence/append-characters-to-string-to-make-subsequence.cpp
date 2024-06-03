class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        int size=t.size();
        while(i<s.size() and j<size)
        {
            if(t[j]==s[i])
            {
                j++;
            }
            i++;
        }
        return size-j;
    }
};