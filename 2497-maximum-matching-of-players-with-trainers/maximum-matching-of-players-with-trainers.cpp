class Solution {
public:
    int matchPlayersAndTrainers(vector<int> players, vector<int> trainers) {
        int i=0;
        int j=0;
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        while(i<players.size() and j<trainers.size())
        {
            while(j<trainers.size() and players[i]>trainers[j])
            {
                j+=1;
            }
            if(j<trainers.size())
            {
                count++;
                j+=1;
                i+=1;
            }
        }
        return count;
    }
};