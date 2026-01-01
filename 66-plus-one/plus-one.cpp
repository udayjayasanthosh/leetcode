class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        vector<int>ans;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int value=(digits[i]+carry);
            int rem=value%10;
            carry=value/10;
            ans.push_back(rem);
        }
        if(carry)
        ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};