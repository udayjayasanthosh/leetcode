class Solution:
    def reverseBits(self, n: int) -> int:
        s=0
        i=31
        while(n>0):
            if(n&1==1):
                s+=2**i
            i-=1
            n=n>>1
        return s
       