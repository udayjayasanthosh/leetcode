class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0,c=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                a+=1;
            }
            else if(bills[i]==10)
            {
                b+=1;
                if(a>0)
                a-=1;
                else
                return false;
            }
            else
            {
                c+=1;
                if(b>0 and a>0)
                {
                    b-=1;
                    a-=1;
                }
                else if(a>=3)
                {
                    a-=3;
                }
                else
                {
                    return false;
                }

            }
        }
        return true;
    }
};