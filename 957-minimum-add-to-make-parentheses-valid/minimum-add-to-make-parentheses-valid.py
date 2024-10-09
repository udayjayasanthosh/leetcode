class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        opens=0
        close=0
        for i in range(len(s)):
            if(s[i]=='('):
                opens+=1
            elif(s[i]==')'):
                if(opens>0):
                    opens-=1
                else:
                    close+=1
        return (opens+close)

            
            
