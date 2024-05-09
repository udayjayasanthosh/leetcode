class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int cheif=0;
        cheif=customers[0][0];
        long long sum=0;
        for(auto i:customers)
        {
            if(cheif<i[0])
            cheif=i[0];
            cheif+=i[1];
            sum+=cheif-i[0];
            // cout<<cheif<<" "<<cheif-i[0]<<endl;
        }
        int n=customers.size();
        // cout<<sum;
        return (double)sum/n;

    }
};