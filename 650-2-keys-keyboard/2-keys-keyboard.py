class Solution:
    def minSteps(self, n: int) -> int:
        if n==1:
            return 0
        step=0
        fact=2
        while(n>1):
            while n%fact ==0:
                step+=fact
                n=n//fact
            fact+=1
        return step
                
        