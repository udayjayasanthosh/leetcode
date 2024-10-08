class Solution:
    def minSwaps(self, s: str) -> int:
        count=0
        bal=0
        for i in s:
            if(i==']'):
                if(bal==0):
                    count+=1
                    bal+=1
                else:
                    bal-=1
            else:
                bal+=1
        return count

