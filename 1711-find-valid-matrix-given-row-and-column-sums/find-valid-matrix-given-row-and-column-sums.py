class Solution:
    def restoreMatrix(self, row: List[int], col: List[int]) -> List[List[int]]:
        a=[]
        for i in range(len(row)):
            b=[]
            s=0
            for j in range(len(col)):
                if(row[i]>=col[j]):
                    s=col[j]
                    col[j]-=s
                    row[i]-=s
                else:
                    s=row[i]
                    col[j]-=s
                    row[i]-=s
                b.append(s)
            a.append(b)
        return a