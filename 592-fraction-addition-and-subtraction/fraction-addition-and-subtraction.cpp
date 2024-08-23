class Solution {
public:
    string fractionAddition(string exp) {
        bool b = true;
        int i = 0;
        while (i < exp.size() and exp[i] != '/')
            i++;
        if (exp[0] != '-')
            b = false;
        vector<int> numerator;
        vector<int> denominator;
        vector<char> operation;
        if (b == false) {
            if (exp[i - 1] - '0' == 0)
            {
                numerator.push_back(10);
            }
            else
            {
                numerator.push_back(exp[i - 1] - '0');
            }
            if (exp[i + 1] - '0' == 1 and i + 2 < exp.size() and exp[i + 2] - '0' == 0) 
            {
                denominator.push_back(10);
            } 
            else
            {
                denominator.push_back(exp[i + 1] - '0');
            }
            operation.push_back('+');
            i++;
        }
        for (int j = i; j < exp.size(); j++) {
            if (exp[j] == '/') {
                if (exp[j - 1] - '0' == 0)
                {
                    numerator.push_back(10);
                    operation.push_back(exp[j-3]);
                }
                else
                {
                    numerator.push_back(exp[j - 1] - '0');
                    operation.push_back(exp[j-2]);
                }
                if (exp[j + 1] - '0' == 1 and j + 2 < exp.size() and exp[j + 2] - '0' == 0) {
                    denominator.push_back(10);
                } 
                else
                {
                    denominator.push_back(exp[j + 1] - '0');
                }
            }
        }
        int dem = denominator[0];
        for (int k = 1; k < denominator.size(); k++) {
            dem = lcm(denominator[k], dem);
        }
        int ans=0;
        for(int i=0;i<operation.size();i++)
        {
            int x=dem/denominator[i];
            int y=x*numerator[i];
            if(operation[i]=='-')
            y=y*-1;
            ans+=y;
        }
        if(ans==0)
        return "0/1";
        // cout<<ans<<" "<<dem;
        int maxi=max(ans,dem);
        cout<<ans<<" "<<dem;
        for(int i=maxi;i>1;i--)
        {
            if(ans%i==0 and dem%i==0)
            {
                ans=ans/i;
                dem=dem/i;
            }
        }
        return to_string(ans)+"/"+to_string(dem);
    }
};