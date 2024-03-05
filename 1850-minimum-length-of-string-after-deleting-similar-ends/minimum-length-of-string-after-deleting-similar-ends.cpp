class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j && s[i] == s[j])
        {
            // if(i==j)return 1;
            // int a=s[i];
            // if(a==s[j])
            // {
            while(s[i+1]==s[i] and i<j)
            {
                i++;
                //cout<<i<<"__"<<endl;
            }
            while(s[j-1]==s[j] and i<j)
            {
                j--;
                //cout<<j<<"--"<<endl;
            }
            i++;
            j--;
            // else
            // {
            //     break;
            // }
        }
        // if(s[i]==s[j])return 0;
        // else
        return max(0, j-i+1);
    }
};