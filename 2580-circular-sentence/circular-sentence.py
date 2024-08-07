class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        a=sentence.split(" ")
        if(len(a)==1):
            if(sentence[0]!=sentence[-1]):
                return False
            else:
                return True
        for i in range(0,len(a)-1):
            if(a[i][-1]!=a[i+1][0]):
                return False
        if(a[0][0]!=a[-1][-1]):
            return False
        return True
        