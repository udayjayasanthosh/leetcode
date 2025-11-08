class Solution:
    def maxArea(self, height: List[int]) -> int:
        def area(a,b):
            return a*b
        i=0
        j=len(height)-1
        m=0
        while i<j:
            c=min(height[i],height[j])
            ma=area(c,j-i)
            if height[i]<height[j]:
                i+=1
            else:
                j-=1
            if m<ma:
                m=ma
        return m
            
