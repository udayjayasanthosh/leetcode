class Solution:
    def clearDigits(self, s: str) -> str:
        ans=""
        check=-1
        numb='0123456789'
        while(check!=0):
            i=0
            j=1
            dummmy=0
            # print(s)
            while(j<len(s)):
                if s[j] in numb:
                    # print(i,j)
                    s=s[0:i]+s[j+1::]
                    i-=1
                    j-=1
                    # print(s)
                    dummmy+=1
                else:
                    i+=1
                    j+=1
            if dummmy==0:
                check=0
        return s



        