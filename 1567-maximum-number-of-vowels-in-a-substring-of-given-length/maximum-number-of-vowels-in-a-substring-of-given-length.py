class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        a=['a','e','i','o','u']
        maxi=0
        c=0
        # for i in range(len(s)-k+1):
        #     c=0
        #     for j in range(i,i+k):
        #         if(s[j] in a):
        #             c+=1
        #     if(maxi<c):
        #         maxi=c
        # return maxi
        for i in range(k):
                if(s[i] in a):
                    c+=1
        i=1
        j=k
        maxi=c
        while(j<len(s)):
            if(s[i-1] in a):
                c-=1
            if(s[j] in a):
                c+=1
            if(c>maxi):
                maxi=c
            i+=1
            j+=1
        return maxi



        
        