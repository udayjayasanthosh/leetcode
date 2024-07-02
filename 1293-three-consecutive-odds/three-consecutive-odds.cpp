class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k=0;
        int i=0;
        while(i<arr.size())
        {
            if(arr[i]%2==1)
            {
                k++;
            }
            else
            {
                k=0;
            }
            if(k>=3)
            return true;
            i++;
        }
        if(k>=3)
        return true;
        return false;
    }
};