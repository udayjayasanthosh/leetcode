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
        s="";
        ones=ones-1;
            while(ones>0)
            {
                s=s+'1';
                ones--;
            }
            while(zero>0)
            {
                s=s+'0';
                zero--;
            }
            s=s+'1';
            return s;
    }
};