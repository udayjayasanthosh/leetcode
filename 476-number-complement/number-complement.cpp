class Solution {
public:
    int findComplement(int num) {
        int i=0;
        int s=0;
        while(num>0)
        {
            if(num&1==1)
            {
                
            }
            else
            {
                s+=pow(2,i);
                cout<<i;
            }
            i++;
            num=num>>1;
        }
        return s;
    }
};