class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        s=list(words[0])
        d={}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in range(1,len(words)):
            m=list(words[i])
            g=[]
            for j in m:
                if j in s:
                    if d[j]>0:
                        g.append(j)
                        d[j]-=1
            mp={}
            s=g
            for k in s:
                if k not in mp:
                    mp[k]=1
                else:
                    mp[k]+=1
            d=mp
        return s