class Solution {
public:
    int getWinner(vector<int> arr, int k) {
        int a=arr.size();
        int b=*max_element(arr.begin(),arr.end());
        if(b==arr[0]) return b;
        int last=-1;
        int count=0;
        while(true)
        {
            if(arr[0]<arr[1])
            {
                int c=arr[1];
                arr[1]=arr[0];
                arr[0]=c;
            }
            if(b==arr[0]) return b;
            int c=arr[1];
            arr.erase(arr.begin()+1);
            arr.push_back(c);
            if(arr[0]==last)
            {
                count++;
            }
            else
            {
                last=arr[0];
                count=1;
            }
            if(count==k)
            return last;
        }
    }
};