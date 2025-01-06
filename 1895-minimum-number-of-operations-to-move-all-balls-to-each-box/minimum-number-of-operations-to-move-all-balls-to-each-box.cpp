class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>index;
        vector<int>ans;
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1')
            {
                index.push_back(i);
            }
        }
        for(int i=0;i<boxes.size();i++)
        {
            int count=0;
            for(int j=0;j<index.size();j++)
            {
                count+=abs(i-index[j]);
            }
            ans.push_back(count);
        }
        return ans;
    }
};