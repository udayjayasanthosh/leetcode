class Solution:
    def spiralMatrixIII(self, row: int, col: int, rstart: int, cstart: int) -> List[List[int]]:
        i=rstart
        j=cstart
        ans=[]
        ans.append([i,j])
        # print(ans)
        a=1
        while(True):
            if(row*col<=len(ans)):
                break
            if(a%2==1):
                for _ in range(a):
                    j=j+1
                    if((i<row and i>=0) and (j<col and j>=0)):
                        ans.append([i,j])
                for _ in range(a):
                    i=i+1
                    if((i<row and i>=0) and (j<col and j>=0)):
                        ans.append([i,j])
                
            else:
                for _ in range(a):
                    j-=1
                    if((i<row and i>=0) and (j<col and j>=0)):
                        ans.append([i,j])
                for _ in range(a):
                    i-=1
                    if((i<row and i>=0) and (j<col and j>=0)):
                        ans.append([i,j])
                
            a+=1
        # print(ans)
        return ans


            
