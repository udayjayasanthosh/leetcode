class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        nums.sort()
        n=len(nums)
        i=0
        while(k>0 and i<n):
            if(nums[i]<=0):
                nums[i]=nums[i]*-1
                k-=1
                i+=1
            else:
                break
        nums.sort()
        if(k%2!=0):
            return sum(nums)-(2*nums[0])
        else:
            return sum(nums)

        