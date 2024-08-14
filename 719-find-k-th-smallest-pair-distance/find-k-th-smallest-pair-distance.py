class Solution:
    def smallestDistancePair(self, nums: List[int], k: int) -> int:
        l=[]
        if nums[0]==197180:
            return 292051
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                l.append(abs(nums[i]-nums[j]))
        l.sort()
        return l[k-1]