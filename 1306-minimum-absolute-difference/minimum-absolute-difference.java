class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        int mini_abs=100000;
        List<List<Integer>>ans=new ArrayList<>();
        Arrays.sort(arr);
        for(int i=0;i<arr.length-1;i++)
        {
            int abs=arr[i+1]-arr[i];
            if(abs<mini_abs)
            {
                mini_abs=abs;
            }
        }
        for(int i=0;i<arr.length-1;i++)
        {
            int abs=arr[i+1]-arr[i];
            if(abs==mini_abs)
            {
                List<Integer>li=new ArrayList<>();
                li.add(arr[i]);
                li.add(arr[i+1]);
            ans.add(li);
            }
        }
        return ans;

    }
}