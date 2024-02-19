class Solution:
    def myAtoi(self, s: str) -> int:
        a=s.split()
        z=0
        if len(a)==0:
            return 0
        b=0
        i=""
        for j in a[0]:
            if(j.isdigit()):
                i+=j
                z=1
            elif(j=='-' and z==0):
                i+=j
                z=1
            elif(j=='+' and z==0):
                i+=j
                z=1
            else:
                break
        try:
            b=int(float(i))
        except:
            print(i)
        c=-(2**31)
        d=(2**31)-1
        if(b<=c):
            return c
        elif(b>=d):
            return d
        else:
            return b

        
        