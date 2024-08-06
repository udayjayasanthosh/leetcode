class Solution:
    def minimumPushes(self, word: str) -> int:
        d={}
        for i in word:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        d=dict(sorted(d.items(), key=lambda item: item[1], reverse=True))  
        count=0 
        a=1
        ans=0
        for val in d.values():
            if(count%8==0 and count!=0):
                a+=1
            count+=1
            ans+=(val*a)
        return ans