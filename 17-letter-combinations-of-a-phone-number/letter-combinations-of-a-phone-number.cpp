class Solution {
public:
    unordered_map<char,string>mp;
    void generate(string digits,int index,int size,vector<string>&v)
    {
        if(index>=size) return;
        vector<string>ans;
        string b=mp[digits[index]];
        for(auto i:v)
        {
            for(auto j:b)
            {
                ans.push_back(i+j);
            }
        }
        v=ans;
        generate(digits,index+1,size,v);
    }
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        int size=digits.size();
        if(size>0)
        {        
            string a=mp[digits[0]];
            vector<string>v;
            for(auto i:a)
            {
                string b="";
                v.push_back(b+i);
            }
            generate(digits,1,size,v);
            return v;
        }
        else{
            return {};
        }
    }
};