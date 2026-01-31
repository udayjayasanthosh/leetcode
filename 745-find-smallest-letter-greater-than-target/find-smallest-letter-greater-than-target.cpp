class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='{';
        for(auto i:letters)
        {
            if(i>target and ans>i)
            {
                ans=i;
            }
        }
        if(ans=='{')
        {
            return letters[0];
        }
        return ans;
    }
};