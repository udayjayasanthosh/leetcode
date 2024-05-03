class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        a=version1.split(".")
        b=version2.split(".")
        c=len(a)
        d=len(b)
        while(c>d and c!=d):
            b.append('0')
            d+=1
        while(d>c and c!=d):
            a.append('0')
            c+=1
        if(int(a[0])>int(b[0])):
            return 1
        elif(int(a[0])<int(b[0])):
            return -1
        else:
            for i in range(1,len(a)):
                if(int(a[i])>int(b[i])):
                    return 1
                elif(int(a[i])<int(b[i])):
                    return -1
            return 0
