class Solution:
    def maximum69Number (self, num: int) -> int:
        n=0
        num=str(num)
        a=""
        for i in range(len(num)):
            if num[i]=='6':
                n=i
                break
        for i in range(len(num)):
            if(i==n):
                a+='9'
            else:
                a+=num[i]
        return int(a)
        