class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        a=[]
        count=0
        for i in range(len(nums)):
            if(len(a)==0):
                a.append(nums[i])
            elif(a[-1]!=nums[i]):
                a.append(nums[i])
        # print(*a)
        for i in range(1,len(a)-1):
            if((a[i]>a[i+1] and a[i-1]<a[i]) or (a[i]<a[i+1] and a[i]<a[i-1])):
                count+=1
        return count

        