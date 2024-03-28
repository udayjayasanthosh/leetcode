class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def si(a):
            s=0
            for i in range(len(a)):
                if a[i]=='1':
                    s+=2**i
            return s
        a=a[::-1]
        b=b[::-1]
        c=si(a)
        d=si(b)
        d=d+c
        s=""
        if(d==0):
            return "0"
        while(d>0):
            if(d&1==1):
                s=s+'1'
            else:
                s=s+'0'
            d=d>>1    
        s=s[::-1]
        return s   