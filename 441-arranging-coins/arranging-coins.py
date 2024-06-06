class Solution:
    def arrangeCoins(self, n: int) -> int:
        a=(sqrt(1+(8*n))-1)//2
        return int(a)