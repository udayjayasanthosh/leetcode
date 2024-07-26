class Solution:
    def reverseWords(self, s: str) -> str:
        a=s.split(" ")
        ans=""
        for i in range(len(a)-1):
            for j in range(len(a[i])-1,-1,-1):
                ans=ans+a[i][j]
            ans+=" "
        for j in range(len(a[-1])-1,-1,-1):
            ans=ans+a[-1][j]
        # print(a[-1])
        # print(ans)
        return ans
        