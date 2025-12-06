class Solution {
    public int countPartitions(int[] nums) {
        int value=0;
        int count=0;
        List<Integer>a=new ArrayList<>();
        for(int i=0;i<nums.length;i++)
        {
            value+=nums[i];
            a.add(value);
        }
        for(int i=0;i<nums.length-1;i++)
        {
            int left=a.get(i);
            int right=value-left;
            if(Math.abs(left-right)%2==0)
            {
                count+=1;
            }
        }
        return count;
    }
}