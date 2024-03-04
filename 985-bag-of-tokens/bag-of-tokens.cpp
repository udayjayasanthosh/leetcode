class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        int score=0;
        sort(token.begin(),token.end());
        int i=0;
        int j=token.size()-1;
        while(i<=j)
        {
            if(token[i]<=power)
            {
                power-=token[i];
                score++;
                i++;
                cout<<score<<"---"<<endl;
                cout<<"power"<<power;
            }
            else if(score>=1 and abs(i-j)>1)
            {
                power+=token[j];
                j--;
                score--;

            }
            else
            {
                return score;
                break;
            }

        }
        return score;
    }
};