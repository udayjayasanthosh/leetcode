class Solution {
public:
    int countOdds(int low, int high) {
        int total=high-low+1;
        int c=0;
        if(total%2==0 or low%2==0 or high%2==0)
        c=total/2;
        else
        c=(total/2)+1;
        return c;
    }
};