class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        mod=(10**9)+7
        a=[]
        for i in range(n):
            a.append(nums[i])
            s=nums[i]
            for j in range(i+1,n):
                s+=nums[j]
                a.append(s)
        a.sort()
        ans=sum(a[left-1:right])
        return ans%mod
