class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i=0;
        int j=0;
        int sum=0;
        int c=0;
        int c1=count(nums.begin(),nums.end(),0);
        if (c1==nums.size() and goal==0)return (c1*(c1+1))/2;
        map<int,int>mpp;
        
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            if (sum==goal)c+=1;
            if ( mpp.find(sum-goal)!=mpp.end()){
               
                c+=mpp[sum-goal];//111
            }
            mpp[sum]++;//1:1
            
        }
         return c;
        
    }
};