class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        a=[]
        pro=1
        
        for i in range(len(nums)):
            pro*=nums[i]
        for j in range(len(nums)):
            if(nums[j]!=0):
                b=pro//nums[j]
                a.append(b)
            else:
                if(nums.count(0)>1):
                    a.append(0)
                else:
                    promax=1
                    for k in range(len(nums)):
                        if(k!=j):
                            promax*=nums[k]
                    a.append(promax)
        return a
        