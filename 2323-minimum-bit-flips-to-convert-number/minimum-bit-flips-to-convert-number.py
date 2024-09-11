class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        def num(a):
            c=0
            while a!=0:
                if a&1==1:
                    c+=1
                a=a>>1
            return c
        a=start^goal
        return num(a)
            
        