class Solution:
    def getLucky(self, s: str, k: int) -> int:
        def help(a):
            s=0
            while(a>0):
                s+=a%10
                a=a//10
            return s

        sa=""
        for i in s:
            b=ord(i)-96
            sa+=str(b)
        sa=int(sa)
        if(sa//10==0):
            return sa
        for _ in range(k):
            sa=help(sa)
            if(sa//10==0):
                break
        return sa

