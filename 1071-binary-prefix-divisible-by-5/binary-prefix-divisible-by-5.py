class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        x=0
        c=0
        a=[]
        for i in nums:
            x=2*x+i
            if(x%5==0):
                a.append(True)
            else:
                a.append(False)
        return a

        