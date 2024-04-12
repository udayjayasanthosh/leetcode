class Solution:
    def trap(self, height: List[int]) -> int:
        a=[]
        b=[]
        max=0
        e=0
        for i in range(len(height)):
            if max<height[i]:
                max=height[i]
            a.append(max)
        max=0
        for j in range(len(height)-1,-1,-1):
            if max<height[j]:
                max=height[j]
            b.append(max)
        b.reverse()
        for i in range(len(height)):
            c=min(b[i],a[i])
            d=abs(c-height[i])
            e+=d
        return e
        