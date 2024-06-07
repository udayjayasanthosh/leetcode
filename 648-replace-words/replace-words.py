class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        s=sentence.split()
        for i in range(len(dictionary)):
            a=len(dictionary[i])
            for j in range(len(s)):
                c=1
                if(a<=len(s[j]) and dictionary[i][0]==s[j][0]):
                    for k in range(1,a):
                        if(dictionary[i][k]==s[j][k]):
                            c+=1
                    if(c==a):
                        s[j]=dictionary[i]
        aa=""
        for i in range(len(s)-1):
            aa=aa+s[i]+" "
        aa=aa+s[-1]
        return aa
