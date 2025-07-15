class Solution {
public:
    bool isValid(string word) {
        vector<bool>v(5,false);
        bool ans=true;
        v[4]=true;
        if(word.size()>=3)
        v[0]=true;
        v[1]=true;
        for(auto i:word)
        {
            if(isdigit(i))
            {
                v[1]=true;
            }
            else if(isupper(i) || islower(i))
            {
                char a=tolower(i);
                if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
                {
                    v[2]=true;
                }
                else
                {
                    v[3]=true;
                }
            }
            else
            {
                v[4]=false;
            }
        }
        for(auto i:v)
        {
            ans=ans && i;
        }
        return ans;
    }
};