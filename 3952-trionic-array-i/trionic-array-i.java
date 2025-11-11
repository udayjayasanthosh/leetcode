class Solution {
    public boolean isTrionic(int[] nums) {
        if (nums == null || nums.length < 3) return false;

        boolean a = false; 
        boolean b = false; 
        boolean c = false;

        int prev = nums[0];

        for (int i = 1; i < nums.length; i++) {
            if(prev==nums[i]) return false;
            if (!a && nums[i] > prev) {
                a = true; 
            } 
            else if (a && !b && nums[i] < prev) {
                b = true; 
            } 
            else if (a && b && !c && nums[i] > prev) {
                c = true;
            }
            else if (!a && nums[i] < prev) {
                return false;
            }
            else if (c && nums[i] < prev) {
                return false;
            }
            prev = nums[i];
        }

        return a && b && c;
    }
}
