class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        if(arr.count(0)>1):
            return True
        for i in arr:
            a=i*2
            if(a in arr and i!=0):
                return True
        return False
        