class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        val1=0
        for i in num1:
            val1=(val1*10)+int(i)
        val2=0
        for i in num2:
            val2=(val2*10)+int(i)
        ans=""
        val=val1+val2
        if(val==0):
            return "0"
        while(val>0):
            ans+=str(val%10)
            val=val//10
        # print(ans)
        return ans[::-1]


        