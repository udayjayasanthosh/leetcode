class Solution {
public:
    bool isvowel(char a)
    {
        a=(char)tolower(a);
        if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u' )return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int h=0;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=v[h];
                h++;
            }
        }
        return s;

    }
};