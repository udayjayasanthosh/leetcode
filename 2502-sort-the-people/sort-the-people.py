class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        a=[]
        for i in range(len(names)):
            b=[]
            b.append(heights[i])
            b.append(names[i])
            a.append(b)
        a.sort()
        b=[]
        for i in range(len(names)-1,-1,-1):
            b.append(a[i][1])
        return b
        