class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>> box) {
        int a=box.size();
        int b=box[0].size();
        vector<vector<char>>v;
        for(int i=0;i<a;i++)
        {
            int c=0;
            for(int k=0;k<b;k++)
            {
                if(box[i][k]=='#')
                {
                    box[i][k]='.';
                    c++;
                }
                else if(box[i][k]=='*' and c>0)
                {
                    for(int l=k-1;l>=0 and c>0;l--)
                    {
                        box[i][l]='#';
                        c--;
                    }
                }
            } 
            if(c>0)
            {
            for(int k=b-1;k>=0 and c>0;k--)
            {
                box[i][k]='#';
                c--;
            }
            }
        }
        for(int i=0;i<b;i++)
        {
            vector<char>demo;
            for(int j=a-1;j>=0;j--)
            {
                demo.push_back(box[j][i]);
            }
            v.push_back(demo);
        }
        return v;
    }
};