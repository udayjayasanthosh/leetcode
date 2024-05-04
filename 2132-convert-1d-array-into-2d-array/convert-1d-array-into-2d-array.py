class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if(m*n > len(original) or m*n < len(original)):
            return []
        b=[]
        t=0
        while(m):
            a=[]
            for _ in range(n):
                a.append(original[t])
                t+=1
            b.append(a)
            m-=1
        return b
        