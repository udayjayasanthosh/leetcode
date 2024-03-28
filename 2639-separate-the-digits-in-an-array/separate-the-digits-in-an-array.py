class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        v=[]
        for i in nums:
            a=str(i)
            for j in a:
                v.append(int(j))
        return v
            
        