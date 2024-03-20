class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        x=[0]*26
        for i in tasks:
            x[ord(i)-ord('A')]+=1
        x.sort()
        f=x[25]-1
        c=f*n
        for i in range(24,-1,-1):
            c-=min(f,x[i])
        if (c>=0):
            return c+len(tasks)
        else:
            return len(tasks)      