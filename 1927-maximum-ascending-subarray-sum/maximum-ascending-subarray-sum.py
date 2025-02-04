class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        maxi=0
        a=[]
        b=[]
        for i in range(len(nums)):
            if maxi<nums[i]:
                a.append(nums[i])
                maxi=nums[i]
            else:
                b.append(sum(a))
                a=[]
                a.append(nums[i])
                maxi=nums[i]
        b.append(sum(a))
        c=max(b)
        return c