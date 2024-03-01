class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0,zero=0;
        for(auto i:s)
        {
            if(i=='1')
            {
                ones++;
            }
            else
            {
                zero++;
            }
        }
        string sa="";
        ones=ones-1;
            while(ones>0)
            {
                sa=sa+'1';
                ones--;
            }
            while(zero>0)
            {
                sa=sa+'0';
                zero--;
            }
            sa+='1';
            return sa;
    }
};