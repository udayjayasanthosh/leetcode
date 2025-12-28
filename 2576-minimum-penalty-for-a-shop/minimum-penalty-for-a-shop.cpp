class Solution {
public:
    int bestClosingTime(string customers) {
        int totalYcount = 0;
        for (auto i : customers) {
            if (i == 'Y') {
                totalYcount++;
            }
        }
        int ncount = 0;
        int ycount = 0;
        int hours = 0;
        int penality = totalYcount;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'N') {
                ncount++;
            } else {
                ycount++;
            }
            int ipenality = ncount + (totalYcount - ycount);
            if (ipenality < penality) {
                hours = i + 1;
                penality = ipenality;
            }
        }
        return hours;
    }
};